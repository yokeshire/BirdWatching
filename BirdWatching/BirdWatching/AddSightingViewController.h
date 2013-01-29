//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by Jacob Ulrich on 1/27/13.
//  Copyright (c) 2013 coe.edu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;

@property (weak, nonatomic) IBOutlet UITextField *locationInput;

@property (strong, nonatomic) BirdSighting *birdSighting;

@end