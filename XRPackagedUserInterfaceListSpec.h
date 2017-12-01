//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPackaging/XRPackagedUserInterfaceDetailSpec.h>

#import "XRPackagedUserInterfaceListSpec.h"

@class NSOrderedSet, NSString;

@interface XRPackagedUserInterfaceListSpec : XRPackagedUserInterfaceDetailSpec <XRPackagedUserInterfaceListSpec>
{
}

+ (id)fetchRequest;
- (BOOL)isTimeSlice;
- (id)newListColumn;
- (unsigned long long)family;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *columns; // @dynamic columns;
@property(copy, nonatomic) NSString *stabilizerColumn; // @dynamic stabilizerColumn;
@property(nonatomic) BOOL timeSlice; // @dynamic timeSlice;

@end
