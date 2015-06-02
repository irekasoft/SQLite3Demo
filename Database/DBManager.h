//
//  DBManager.h
//  SQLite3Demo
//
//  Created by Hijazi on 2/6/15.
//  Copyright (c) 2015 iReka Soft. All rights reserved.
//
//  This code was
//  learn from http://www.appcoda.com/sqlite-database-ios-app-tutorial/


#import <Foundation/Foundation.h>

@interface DBManager : NSObject

- (instancetype)initWithDatabaseFilename:(NSString *)dbFilename;
- (void)runQuery:(const char *)query isQueryExecutable:(BOOL)queryExecutable;

- (NSArray *)loadDataFromDB:(NSString *)query;
- (void)executeQuery:(NSString *)query;

@property (nonatomic, strong) NSMutableArray *arrResults;
@property (nonatomic, strong) NSMutableArray *arrColumnNames;
@property (nonatomic) int affectedRows;
@property (nonatomic) long long lastInsertedRowID;


@end
