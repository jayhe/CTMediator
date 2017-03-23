//
//  Target_A.h
//  CTMediator
//
//  Created by casa on 16/3/13.
//  Copyright © 2016年 casa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Target_A : NSObject

- (UIViewController *)action_nativeFetchDetailViewController:(NSDictionary *)params;
- (id)action_nativePresentImage:(NSDictionary *)params;
- (id)action_showAlert:(NSDictionary *)params;

// 容错
- (id)action_nativeNoImage:(NSDictionary *)params;

@end
