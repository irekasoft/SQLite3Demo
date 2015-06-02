//
//  DetailViewController.h
//  SQLite3Demo
//
//  Created by Hijazi on 2/6/15.
//  Copyright (c) 2015 iReka Soft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DBManager.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSArray *detailItem;

@property (weak, nonatomic) IBOutlet UITextField *tf_firstName;
@property (weak, nonatomic) IBOutlet UITextField *tf_secondName;
@property (weak, nonatomic) IBOutlet UITextField *tf_age;



@property (nonatomic, strong) DBManager *dbManager;


@end

