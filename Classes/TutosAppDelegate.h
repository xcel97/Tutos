//
//  TutosAppDelegate.h
//  Tutos
//
//  Created by AeCeL on 14/08/11.
//  Copyright 2011 EFREI. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TutosViewController;

@interface TutosAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TutosViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TutosViewController *viewController;

@end

