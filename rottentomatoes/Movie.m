//
//  Movie.m
//  rottentomatoes
//
//  Created by Henry Ching on 1/12/14.
//  Copyright (c) 2014 YahooHenry. All rights reserved.
//

#import "Movie.h"

@implementation Movie

- (id)initWithDictionary:(NSDictionary *)dictionary {
    
    self.title = [dictionary objectForKey:@"title"];
    self.synopsis = [dictionary objectForKey:@"synopsis"];
    
    NSDictionary *posters = [dictionary objectForKey:@"posters"];
    self.posterURL = [posters objectForKey:@"thumbnail"];
    
    return self;
}

@end
