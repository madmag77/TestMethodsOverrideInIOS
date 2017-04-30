//
//  obj_c.h
//  TestAllLangsClasses
//
//  Created by Artem Goncharov on 30/04/2017.
//  Copyright © 2017 MadMag. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Obj_c_A : NSObject
- (void)f;
@end

@interface Obj_c_B : Obj_c_A
- (void)f;
@end

@interface Obj_c_C : Obj_c_B
- (void)f;
@end

@interface TestObjClass : NSObject
- (void)test;
@end

