//
//  SudokuEndGame.m
//  SudokuAm
//
//  Created by Wu on 2019/5/17.
//  Copyright © 2019 net.sudoku.am. All rights reserved.
//

#import "SudokuEndGame.h"

@implementation SudokuEndGame

- (id)initWithCoder:(NSCoder *)decoder {
    if (self = [super init]) {
        self.times = [decoder decodeObjectForKey:@"times"];
        self.date = [decoder decodeObjectForKey:@"date"];
    }
    return self;
}
- (void)encodeWithCoder:(NSCoder *)encoder {
    [encoder encodeObject:self.times forKey:@"times"];
    [encoder encodeObject:self.date forKey:@"date"];
}


@end
