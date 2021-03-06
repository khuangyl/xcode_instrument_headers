//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRAnalysisCoreRollUpFunction.h"

@class NSString, XRAnalysisCoreImplValue;

@interface XRAnalysisCoreStandardHistogramRollUp : NSObject <XRAnalysisCoreRollUpFunction>
{
    unsigned char _colID;
    XRAnalysisCoreImplValue *_reusedImpl;
    unsigned long long _bucketWidth;
}

@property(nonatomic) unsigned long long bucketWidth; // @synthesize bucketWidth=_bucketWidth;
- (void).cxx_destruct;
- (void)rollUp:(const struct XRAnalysisCoreReadCursor *)arg1 to:(id *)arg2 core:(id)arg3;
- (id)extendFunctionWithScope:(unsigned long long)arg1;
- (unsigned short)outputEngineeringType;
- (BOOL)isValidForEngineeringType:(unsigned short)arg1;
- (id)displayableFunctionName;
- (id)initWithBucketWidth:(unsigned long long)arg1 timeColumnID:(unsigned char)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

