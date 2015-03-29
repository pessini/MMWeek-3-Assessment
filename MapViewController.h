//
//  MapViewController.h
//  CodeChallenge3
//
//  Created by Vik Denic on 10/16/14.
//  Copyright (c) 2014 Mobile Makers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DivvyStation.h"

@interface MapViewController : UIViewController

@property DivvyStation *divvyStation;
@property CLLocation *userLocation;

@end
