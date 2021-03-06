//
//  TGisRequestParams.h
//  2gisApi-iOS
//
//  Created by Кирилл Кунст on 28.03.13.
//  Copyright (c) 2013 crtweb. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kID @"id"
#define kWhat @"what"
#define kWhere @"where"
#define kPoint @"point"
#define kRadius @"radius"
#define kPage @"page"
#define kPagesize @"pagesize"
#define kOutput @"output"
#define kSort @"sort"
#define kBound1 @"bound[point1]"
#define kBound2 @"bound[point2]"

//sorting
#define kSortRelevance @"relevance"
#define kSortRating @"rating"
#define kSortName @"name"
#define kSortDistance @"distance"



@interface TGRequestParams : NSObject
{
    NSMutableDictionary *_params;
}

+(id)paramsWithDictionary:(NSDictionary *)dict;

+(id)params;

-(void)addParam:(NSString *)param value:(NSString *)value;

-(NSDictionary *)toDictionary;

@end
