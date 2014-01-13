//
//  Movie.h
//  rottentomatoes
//
//  Created by Henry Ching on 1/12/14.
//  Copyright (c) 2014 YahooHenry. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Movie : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *cast;

- (id)initWithDictionary:(NSDictionary *)dictionary;



@end
