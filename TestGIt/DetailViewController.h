//
//  DetailViewController.h
//  TestGIt
//
//  Created by ralbatr on 14-12-4.
//  Copyright (c) 2014年 王国帅. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

