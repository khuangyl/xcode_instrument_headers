//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XRAnalysisCoreRollUpItem;

@interface XRAnalysisCoreRollUpChange : NSObject
{
    XRAnalysisCoreRollUpItem *_item;
    unsigned long long _kind;
    long long _index;
    long long _otherIndex;
    XRAnalysisCoreRollUpItem *_parent;
    XRAnalysisCoreRollUpItem *_otherParent;
}

+ (id)movedItemChange:(id)arg1 atIndex:(long long)arg2 parent:(id)arg3 toIndex:(long long)arg4 parent:(id)arg5;
+ (id)insertedItemChange:(id)arg1 atIndex:(long long)arg2 parent:(id)arg3;
+ (id)fullReloadChange;
@property(readonly, nonatomic) XRAnalysisCoreRollUpItem *otherParent; // @synthesize otherParent=_otherParent;
@property(readonly, nonatomic) XRAnalysisCoreRollUpItem *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) long long otherIndex; // @synthesize otherIndex=_otherIndex;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) XRAnalysisCoreRollUpItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)init;

@end

