//
//  RowControlsController.h
//  Nav
//
//  Created by guo gloria on 11-8-2.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondLevelViewController.h"


@interface RowControlsController : SecondLevelViewController
{
    NSArray *list;
    
}

@property (nonatomic, retain) NSArray *list;

- (IBAction)buttonTapped:(id)sender;
@end
