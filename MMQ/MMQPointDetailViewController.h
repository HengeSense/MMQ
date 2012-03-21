//
//  MMQPointDetailViewController.h
//  MMQ
//
//  Created by Pedro Góes on 05/12/11.
//  Copyright (c) 2011 pedrogoes.info. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MMQViewController;

@interface MMQPointDetailViewController : UIViewController <UITextFieldDelegate> {
    IBOutlet UITextField *tX;
    IBOutlet UITextField *tY;
    NSIndexPath *indexPath;
    MMQViewController *controller;
    
    id firstResponder;
}

@property (nonatomic, retain) UITextField *tX;
@property (nonatomic, retain) UITextField *tY;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (assign) MMQViewController *controller;

@property (assign) id firstResponder;

- (IBAction)inverterValores;
- (void)negativarValor;
- (IBAction)backgroundTap;
- (void)salvarCampos;

@end
