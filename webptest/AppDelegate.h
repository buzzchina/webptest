//
//  AppDelegate.h
//  webptest
//
//  Created by 田思阳 on 2017/12/29.
//  Copyright © 2017年 田思阳. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

