//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSArray, NSSet, NSString;

@interface XRPackagedTableSpec : NSManagedObject
{
}

- (id)parametersReferenced;
- (id)resolvedProvider;
- (id)attributesAsDictionary;
- (id)newAttribute;

// Remaining properties
@property(readonly) NSSet *attributes; // @dynamic attributes;
@property(readonly) NSArray *instanceBoundAttributeValues; // @dynamic instanceBoundAttributeValues;
@property(retain) NSString *schemaRef; // @dynamic schemaRef;

@end
