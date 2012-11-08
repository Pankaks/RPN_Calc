//
//  CalculatorBrain.h
//  Calculator
//
//  Created by DS User on 10/31/12.
//  Copyright (c) 2012 DS User. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
