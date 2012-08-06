//
//  AppDelegate.h
//  iTicTacToe
//
//  Created by David Sedgewick on 12-08-01.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UINavigationController *gameNavigationController;
}


@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) UINavigationController *gameNavigationController;
@end
