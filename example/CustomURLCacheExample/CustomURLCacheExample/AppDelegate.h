//
//  AppDelegate.h
//  CustomURLCacheExample
//
//  Created by  李亚洲 on 10/25/14.
//  Copyright (c) 2014 UCAS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomURLCache.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) CustomURLCache *mCache;
@property (strong, nonatomic) UINavigationController *navController;

@end

