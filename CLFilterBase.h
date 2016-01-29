//
//  CLFilterBase.h
//
//  Created by Samuel Andros	 on 2014/10/26.
//  Copyright (c) Samuel Andros. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CLImageToolSettings.h"

@protocol CLFilterBaseProtocol <NSObject>

@required
+ (UIImage*)applyFilter:(UIImage*)image;

@end


@interface CLFilterBase : NSObject<CLImageToolProtocol, CLFilterBaseProtocol>

@end
