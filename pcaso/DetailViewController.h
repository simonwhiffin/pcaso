//
//  DetailViewController.h
//  pcaso
//
//  Created by Simon Whiffin on 12/12/2013.
//  Copyright (c) 2013 Simon Whiffin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
