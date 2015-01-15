//
//  AppDelegate.h
//  theTranslator
//
//  Created by Jan Roures Mintenig on 14/1/15.
//  Copyright (c) 2015 Jan Roures Mintenig. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GoogleTranslateAPI.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, GoogleTranslateAPIDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

