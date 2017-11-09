//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRAnalysisCoreGraphTreatment.h>

#import "NSSecureCoding.h"

@class NSMutableArray, NSString;

@interface XRAnalysisCoreValueTreatment : XRAnalysisCoreGraphTreatment <NSSecureCoding>
{
    NSMutableArray *_depthOverrides;
    BOOL _supportsHighlighting;
    BOOL _supportsWalking;
    NSString *_valueColumnName;
    NSString *_valueLabelColumnName;
    NSString *_valueQualifierColumnName;
    NSString *_colorColumnName;
    NSString *_highlightingRoute;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *highlightingRoute; // @synthesize highlightingRoute=_highlightingRoute;
@property(nonatomic) BOOL supportsWalking; // @synthesize supportsWalking=_supportsWalking;
@property(nonatomic) BOOL supportsHighlighting; // @synthesize supportsHighlighting=_supportsHighlighting;
@property(copy, nonatomic) NSString *colorColumnName; // @synthesize colorColumnName=_colorColumnName;
@property(copy, nonatomic) NSString *valueQualifierColumnName; // @synthesize valueQualifierColumnName=_valueQualifierColumnName;
@property(copy, nonatomic) NSString *valueLabelColumnName; // @synthesize valueLabelColumnName=_valueLabelColumnName;
@property(copy, nonatomic) NSString *valueColumnName; // @synthesize valueColumnName=_valueColumnName;
- (void).cxx_destruct;
- (BOOL)workaround30300088;
- (BOOL)supportsWalkingAtDepth:(long long)arg1;
- (id)highlightingRouteAtDepth:(long long)arg1;
- (BOOL)supportsHighlightingAtDepth:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)addDepthOverride:(id)arg1;

@end
