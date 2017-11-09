//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, XRInstrument, XRStrategyUIControllerState, XRTrace;

@interface XRAnalysisCoreTrackConfigurator : NSObject
{
    NSMutableDictionary *_existanceProjectorsByRunNumber;
    XRTrace *_trace;
    XRInstrument *_instrument;
    XRStrategyUIControllerState *_strategyUIControllerState;
}

@property(retain, nonatomic) XRStrategyUIControllerState *strategyUIControllerState; // @synthesize strategyUIControllerState=_strategyUIControllerState;
@property(retain, nonatomic) XRInstrument *instrument; // @synthesize instrument=_instrument;
@property(retain, nonatomic) XRTrace *trace; // @synthesize trace=_trace;
- (void).cxx_destruct;
- (id)_refreshExistenceProjectorsForRunNumber:(long long)arg1;
- (unsigned int)_tableIDForSpec:(id)arg1 runNumber:(long long)arg2;
- (void)_configureGroupByTrack:(id)arg1 plan:(id)arg2 graphSpec:(id)arg3 treatment:(id)arg4 core:(id)arg5 graphIndex:(float *)arg6;
- (BOOL)shouldUpdateBrushLayoutForRun:(long long)arg1;
- (void)configureTrack:(id)arg1;
- (id)init;

@end

