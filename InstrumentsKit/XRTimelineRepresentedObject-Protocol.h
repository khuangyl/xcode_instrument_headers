//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTTimelineGraph, NSArray, NSString, XRRunListData, XRStrategyUIController, XRStrategyUIControllerTopLevelItem;

@protocol XRTimelineRepresentedObject <NSObject>
- (NSArray *)_filterablesForRunListData:(XRRunListData *)arg1 runNumber:(long long)arg2;
- (BOOL)_planeShouldBeResizableForUIStrategy;
- (void)_createTrackForTopLevelItem:(XRStrategyUIControllerTopLevelItem *)arg1 uiStrategyController:(XRStrategyUIController *)arg2 graph:(DTTimelineGraph *)arg3 multipleBrushes:(BOOL)arg4 forEmbedding:(BOOL)arg5 inToolbar:(BOOL)arg6;
- (XRStrategyUIControllerTopLevelItem *)_topLevelItemForUIStrategy:(XRStrategyUIController *)arg1 forEmbedding:(BOOL)arg2 instance:(unsigned int)arg3;
- (XRStrategyUIControllerTopLevelItem *)_topLevelItemForUIStrategy:(XRStrategyUIController *)arg1 forEmbedding:(BOOL)arg2;
- (id <NSCopying>)_keyForUIStrategy;
- (NSString *)_UISerializationString;
- (int)_strategyUIType;
@end

