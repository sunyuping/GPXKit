//
//  GPXParser.h
//  GPXKit
//
//  Created by Keith Sharp on 10/06/2013.
//  Copyright (c) 2013 Passback Consulting. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GPXParser : NSObject <NSXMLParserDelegate>

@property (readonly) NSArray *waypoints;
@property (readonly) NSArray *routes;
@property (readonly) NSArray *tracks;

@end