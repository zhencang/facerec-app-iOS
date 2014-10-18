//
//  FRCaptureFaceViewController.h
//  FaceRec-iOS
//
//  Created by Charles Wang on 2/15/14.
//  Copyright (c) 2014 Charles Wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FRCameraViewController.h"

@class FRPerson;

@interface FRCaptureFaceViewController : FRCameraViewController

+ (instancetype)viewControllerWithPerson:(FRPerson *)person;

@end