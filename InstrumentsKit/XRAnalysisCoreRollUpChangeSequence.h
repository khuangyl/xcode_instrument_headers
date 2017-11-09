//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface XRAnalysisCoreRollUpChangeSequence : NSObject
{
    NSMutableArray *_sequence;
    long long _moveCount;
    BOOL _reloadAll;
}

- (void).cxx_destruct;
- (void)enumerateChanges:(CDUnknownBlockType)arg1;
- (void)moveItem:(id)arg1 atIndex:(long long)arg2 inParent:(id)arg3 toIndex:(long long)arg4 inParent:(id)arg5;
- (void)insertedItem:(id)arg1 atIndex:(unsigned long long)arg2 parent:(id)arg3;
- (void)recreatingAllItems;
@property(readonly, nonatomic, getter=isIgnoringMoves) BOOL ignoringMoves;
- (id)init;

@end
