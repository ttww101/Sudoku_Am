//
//  NewsOneDetailVC.m
//  Borrowing treasure
//
//  Created by  何浩贤 on 2017/12/8.
//  Copyright © 2017年 com.BorrowingTreasure.yijia. All rights reserved.
//

#import "NewsOneDetailVC.h"
#import <WebKit/WebKit.h>
#import "SLJSHandler.h"

@interface NewsOneDetailVC ()<WKNavigationDelegate>
@property (nonatomic,strong) WKWebView * WebView;
@property (nonatomic,weak) WKWebViewConfiguration * webConfiguration;
@property (nonatomic,strong) SLJSHandler * jsHandler;
@property (nonatomic,assign) double lastProgress;//上次进度条位置
@property (nonatomic,strong) UIProgressView * progressView;
@end

@implementation NewsOneDetailVC

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];

    [self addTitleWithTitle:self.model.title];
    
    [self initWKWebView];
    
    //适配iOS11
    if (@available(iOS 11.0, *)){
        self.WebView.scrollView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
    }
    else{
        self.automaticallyAdjustsScrollViewInsets = NO;
    }
    
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]initWithImage:[[UIImage imageNamed:@"back"] imageWithRenderingMode:1] style:0 target:self action:@selector(back)];
    
}


-(void)back{
    
    if ([self.WebView canGoBack]) {
        [self.WebView goBack];
    }
    else {
        [self.navigationController popViewControllerAnimated:YES];
    }
    
}


#pragma mark 初始化webview
-(void)initWKWebView
{
    WKWebViewConfiguration * configuration = [[WKWebViewConfiguration alloc]init];
    configuration.preferences.javaScriptEnabled = YES;//打开js交互
    _webConfiguration = configuration;
    _jsHandler = [[SLJSHandler alloc]initWithViewController:self configuration:configuration];
    
    
    self.WebView = [[WKWebView alloc]initWithFrame:CGRectMake(0, 0, LScreenWidth, self.SecondHeight) configuration:configuration];
    _WebView.navigationDelegate = self;
    
    _WebView.backgroundColor = [UIColor clearColor];
    _WebView.allowsBackForwardNavigationGestures =YES;//打开网页间的 滑动返回
    _WebView.scrollView.decelerationRate = UIScrollViewDecelerationRateNormal;
    //监控进度
    [_WebView addObserver:self forKeyPath:@"estimatedProgress" options:NSKeyValueObservingOptionNew context:nil];
    [self.view addSubview:_WebView];
    //进度条
    _progressView = [[UIProgressView alloc]initWithProgressViewStyle:UIProgressViewStyleDefault];
    _progressView.tintColor = [UIColor redColor];
    _progressView.trackTintColor = [UIColor clearColor];
    _progressView.frame = CGRectMake(0, 0, self.view.bounds.size.width, 3.0);
    [_WebView addSubview:_progressView];
    
        
    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:self.model.url]];
        
    [_WebView loadRequest:request];
    
    
}



#pragma mark --进度条
-(void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey,id> *)change context:(void *)context {
    
    [self updateProgress:_WebView.estimatedProgress];
}

#pragma mark -  更新进度条
-(void)updateProgress:(double)progress{
    self.progressView.alpha = 1;
    if(progress > _lastProgress){
        [self.progressView setProgress:self.WebView.estimatedProgress animated:YES];
    }else{
        [self.progressView setProgress:self.WebView.estimatedProgress];
    }
    _lastProgress = progress;
    
    if (progress >= 1) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            self.progressView.alpha = 0;
            [self.progressView setProgress:0];
            _lastProgress = 0;
        });
    }
}

#pragma mark --navigation delegate
//加载完毕
-(void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation {
    //    self.title = webView.title;
    [self updateProgress:webView.estimatedProgress];
    
    [self updateNavigationItems];
    
    
}

-(void)updateNavigationItems{
    
}



-(void)webView:(WKWebView *)webView decidePolicyForNavigationAction:(WKNavigationAction *)navigationAction decisionHandler:(void (^)(WKNavigationActionPolicy))decisionHandler {
    if(webView != self.WebView) {
        decisionHandler(WKNavigationActionPolicyAllow);
        return;
    }
    //更新返回按钮
    [self updateNavigationItems];
    
    NSURL * url = webView.URL;
    
    //打开wkwebview禁用了电话和跳转appstore 通过这个方法打开
    UIApplication *app = [UIApplication sharedApplication];
    
    
    
    if ([url.scheme isEqualToString:@"tel"]) {
        
        if ([app canOpenURL:url])
        {
            [app openURL:url];
            decisionHandler(WKNavigationActionPolicyCancel);
            return;
        }
    }else if ([url.absoluteString containsString:@"itunes.apple.com"]){
        
        if ([app canOpenURL:url])
        {
            [app openURL:url];
            decisionHandler(WKNavigationActionPolicyCancel);
            return;
        }
        
    }else if ([[NSString stringWithFormat:@"%@",url] rangeOfString:@"payResult"].location != NSNotFound){
        
        decisionHandler(WKNavigationActionPolicyCancel);
        
        
        return;
        
        
    }else{
        
        
        decisionHandler(WKNavigationActionPolicyAllow);
        
        
        
    }
    
}

-(void)prosperity:(int)type{
    
    
    
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)dealloc {
    [_jsHandler cancelHandler];
    self.WebView.navigationDelegate = nil;
    [_WebView removeObserver:self forKeyPath:@"estimatedProgress"];
}



/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
