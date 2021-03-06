//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRStrategyControllerDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSSet, XRTrace;

@interface XRStrategyManager : NSObject <XRStrategyControllerDelegate>
{
    NSMutableDictionary *_controllers;
    XRTrace *_traceNotRetained;
    NSMutableSet *_presentStrategies;
    NSMutableSet *_strategiesNeedingReload;
}

+ (id)strategyInfoByIdentifier;
@property(copy) NSSet *presentStrategies; // @synthesize presentStrategies=_presentStrategies;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldPresentUIForStrategyIdentifier:(struct NSString *)arg1 runNumber:(long long)arg2;
- (id)planForStrategyIdentifier:(struct NSString *)arg1 runNumber:(long long)arg2;
- (void)_reloadStratControllers;
- (void)strategiesNeedReloadForRunNumber:(long long)arg1;
- (id)coreForRunNumber:(long long)arg1;
- (id)presentStrategyIdentifiersInRunNumber:(long long)arg1;
- (id)allCoresForRunNumber:(long long)arg1;
- (id)instrumentsForAllRuns;
- (id)threadsByTIDInRunNumber:(long long)arg1;
- (id)strategy:(id)arg1 runsForRunNumber:(long long)arg2;
- (id)strategyWithIdentifier:(struct NSString *)arg1 forRunNumber:(long long)arg2;
- (BOOL)_recomputePresentStrategies;
- (id)init;
- (id)trace;
- (void)_setTrace:(id)arg1;

@end

