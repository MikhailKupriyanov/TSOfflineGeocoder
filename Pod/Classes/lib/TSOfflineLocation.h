//
//  TSOfflineLocation.h
//  Memento
//
//  Created by Benoit Nolens on 12/06/14.
//  Copyright (c) 2014 True Story. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface TSOfflineLocation : NSObject <NSCopying, NSCoding>

@property (nonatomic) CLLocationCoordinate2D coordinates;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *displayName;
@property (nonatomic, strong) NSString *altNames;
@property (nonatomic, strong) NSNumber *population;
@property (nonatomic, strong) NSString *countryCode;
@property (nonatomic, strong) NSString *altCountryCode;
@property (nonatomic, strong) NSTimeZone *timeZone;
@property (nonatomic) BOOL isCurrentLocation;
@property (nonatomic, strong) NSString *geonameid;

+ (instancetype) objectWithDictionary:(NSDictionary *)dictionary;
+ (instancetype) objectWithPlacemark:(CLPlacemark *)placemark;

#pragma mark - NSObject

- (BOOL) isEqualToLocation:(TSOfflineLocation*)location;

@end
