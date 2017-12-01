//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPackaging/XRPackagedUserInterfaceDetailSpec.h>

#import "XRPackagedUserInterfaceAggregationSpec.h"

@class NSOrderedSet;

@interface XRPackagedUserInterfaceAggregationSpec : XRPackagedUserInterfaceDetailSpec <XRPackagedUserInterfaceAggregationSpec>
{
}

+ (id)fetchRequest;
- (id)newLevel;
- (id)newColumn;
- (unsigned long long)family;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *columns; // @dynamic columns;
@property(retain, nonatomic) NSOrderedSet *levels; // @dynamic levels;

@end

