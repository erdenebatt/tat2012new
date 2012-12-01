//
//  DetailViewController.h
//  tat2012new
//
//  Created by Erdenebat Tsenddorj on 12/2/12.
//  Copyright (c) 2012 Erdenebat Tsenddorj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
