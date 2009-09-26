//
//  LHLecturesDatabase.h
//  fosdem
//
//  Created by Leon on 9/26/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LHLecture.h"

@interface LHLecturesDatabase : NSObject {

    NSMutableArray *lectures;
}

+ (NSString *) lecturesDatabaseLocation;
+ (LHLecturesDatabase *) sharedLecturesDatabase;

- (LHLecturesDatabase*) initWithDictionary: (NSDictionary *) dictionary;

@property (assign) NSMutableArray *lectures;
@end