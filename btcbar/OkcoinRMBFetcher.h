//
//  OkcoinRMBFetcher.h
//  btcbar
//
//  Created by rudy on 7/6/16.
//  Copyright © 2016 nearengine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fetcher.h"


@interface OkcoinRMBFetcher : NSObject<Fetcher, NSURLConnectionDelegate>

@property (nonatomic) NSString* ticker;
@property (nonatomic) NSString* ticker_menu;
@property (nonatomic) NSString* url;
@property (nonatomic) NSError* error;
@property (nonatomic) NSMutableData *responseData;

@end
