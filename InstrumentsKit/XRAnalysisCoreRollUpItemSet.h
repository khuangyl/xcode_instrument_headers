//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XRAnalysisCoreRollUpItemSet : NSObject
{
    NSMutableDictionary *_rootAttrs;
}

- (void).cxx_destruct;
- (void)_enumerateContentsWithCore:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_removeItem:(id)arg1 projectors:(id)arg2;
- (void)_addItem:(id)arg1 projectors:(id)arg2;
- (id)plistRepresentation;
- (id)init;
- (id)initWithPlistRepresentation:(id)arg1;

@end

