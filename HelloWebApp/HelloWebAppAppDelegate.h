//
//  HelloWebAppAppDelegate.h
//  HelloWebApp
//
//  Created by 상찬 이 on 11. 3. 15..
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWebAppAppDelegate : NSObject <UIApplicationDelegate> {
    IBOutlet UIWebView *webView;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIWebView *webView;

@end
