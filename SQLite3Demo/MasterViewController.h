//
//  MasterViewController.h
//  SQLite3Demo
//
//  Created by Hijazi on 2/6/15.
//  Copyright (c) 2015 iReka Soft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DBManager.h"

@interface MasterViewController : UITableViewController

@property (nonatomic, strong) DBManager *dbManager;
@property (nonatomic, strong) NSMutableArray *arrPeopleInfo;

-(void)loadData;

@end

