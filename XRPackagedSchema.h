//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "XRPackagedSchema.h"

@class NSOrderedSet, NSString, XRPackage;

@interface XRPackagedSchema : NSManagedObject <XRPackagedSchema>
{
}

+ (id)fetchRequest;
- (id)resolvedDefinition;
- (id)referenceColumnForMnemonic:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *attributes; // @dynamic attributes;
@property(retain, nonatomic) NSOrderedSet *columns; // @dynamic columns;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *note; // @dynamic note;
@property(copy, nonatomic) NSString *owner; // @dynamic owner;
@property(retain, nonatomic) XRPackage *package; // @dynamic package;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

