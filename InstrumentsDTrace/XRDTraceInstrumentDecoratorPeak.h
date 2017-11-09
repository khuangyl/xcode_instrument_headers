//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTTimelineDecorator.h"

@class PFTDTraceRun;

@interface XRDTraceInstrumentDecoratorPeak : DTTimelineDecorator
{
    PFTDTraceRun *_run;
    unsigned long long _graphIndex;
    unsigned long long _barWidth;
    BOOL _stackDepth;
}

- (void).cxx_destruct;
- (id)decorateInspectionRanges:(id)arg1;
- (BOOL)mustDecorateOnMainThread;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (void)setDefaultsForPlane:(id)arg1;
- (id)initWithRun:(id)arg1 graphIndex:(unsigned long long)arg2 barWidth:(unsigned long long)arg3;
- (id)init;

@end

