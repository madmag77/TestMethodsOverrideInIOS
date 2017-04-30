//
//  obj_c.m
//  TestAllLangsClasses
//
//  Created by Artem Goncharov on 30/04/2017.
//  Copyright © 2017 MadMag. All rights reserved.
//

#import "obj_c.h"

@implementation Obj_c_A
- (void)f {
    fprintf(stdout, "%s\n", [@"A" UTF8String]);
}
@end

@implementation Obj_c_B
- (void)f {
    fprintf(stdout, "%s\n", [@"B" UTF8String]);
}
@end

@implementation Obj_c_C
- (void)f {
    fprintf(stdout, "%s\n", [@"C" UTF8String]);
}
@end

@implementation TestObjClass
- (void)test {
    id a = [Obj_c_C new];
    Obj_c_B *b = a;
    Obj_c_C *c = a;
    [a f];
    [b f];
    [c f];
}
@end
