//
//  DetailViewController.h
//  SQLite3Demo
//
//  Created by Hijazi on 2/6/15.
//  Copyright (c) 2015 iReka Soft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

