//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSOrderedSet, NSString;

@interface XRInstrumentDebuggerGraphNode : NSManagedObject
{
}

+ (id)fetchRequest;
- (id)treeNodeChildren;

// Remaining properties
@property(copy, nonatomic) NSString *detailIdentifier; // @dynamic detailIdentifier;
@property(nonatomic) int graphIdentifier; // @dynamic graphIdentifier;
@property(copy, nonatomic) NSString *iconName; // @dynamic iconName;
@property(retain, nonatomic) NSOrderedSet *incoming; // @dynamic incoming;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSOrderedSet *outgoing; // @dynamic outgoing;

@end

