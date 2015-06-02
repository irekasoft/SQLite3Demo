//
//  DetailViewController.m
//  SQLite3Demo
//
//  Created by Hijazi on 2/6/15.
//  Copyright (c) 2015 iReka Soft. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

#pragma mark - Managing the detail item



- (void)configureView {
    // Update the user interface for the detail item.
    if (self.detailItem) {
        
        NSInteger indexOfFirstname = [self.dbManager.arrColumnNames indexOfObject:@"firstname"];
        NSInteger indexOfLastname = [self.dbManager.arrColumnNames indexOfObject:@"lastname"];
        NSInteger indexOfAge = [self.dbManager.arrColumnNames indexOfObject:@"age"];
   
        NSLog(@"configure view %ld %ld %ld", indexOfFirstname, indexOfLastname, indexOfAge);
        
        self.tf_firstName.text = self.detailItem[indexOfFirstname];
        self.tf_secondName.text = self.detailItem[indexOfLastname];
        self.tf_age.text = self.detailItem[indexOfAge];
        
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)update:(id)sender {
    
    NSString *query = [NSString stringWithFormat:@"update peopleInfo set firstname='%@', lastname='%@', age=%d where peopleInfoID=%d", self.tf_firstName.text, self.tf_secondName.text, self.tf_age.text.intValue, [self.detailItem[0] intValue]];
    

    // Execute the query.
    [self.dbManager executeQuery:query];

    // If the query was successfully executed then pop the view controller.
    if (self.dbManager.affectedRows != 0) {
        NSLog(@"Query was executed successfully. Affected rows = %d", self.dbManager.affectedRows);
        
      
    }
    else{
        NSLog(@"Could not execute the query.");
    }

}

@end
