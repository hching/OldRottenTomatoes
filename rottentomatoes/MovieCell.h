//
//  MovieCell.h
//  rottentomatoes
//
//  Created by Henry Ching on 1/12/14.
//  Copyright (c) 2014 YahooHenry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UIImageView *posterImageView;
@property (nonatomic, weak) IBOutlet UILabel *movieTitleLabel;
@property (nonatomic, weak) IBOutlet UILabel *movieSynopsisLabel;

@end
