//
//  FlipsideViewController.h
//  Tut Nav Bar
//
//  Created by Me on 4/4/12.
//  Copyright (c) 2012 TechnicalUI & RealTuty. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
