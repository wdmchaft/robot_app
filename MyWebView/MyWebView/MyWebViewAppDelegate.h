//
//  MyWebViewAppDelegate.h
//  MyWebView
//
//  Created by Simon Bøgh on 09/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MyWebViewViewController;

@interface MyWebViewAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MyWebViewViewController *viewController;

@end
