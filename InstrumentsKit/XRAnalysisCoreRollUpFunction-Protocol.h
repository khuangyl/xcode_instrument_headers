//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRAnalysisCoreProjectorFunction.h"

@class XRAnalysisCoreTableQuery, XRAnalysisCoreValue;

@protocol XRAnalysisCoreRollUpFunction <XRAnalysisCoreProjectorFunction>
- (void)rollUp:(const struct XRAnalysisCoreReadCursor *)arg1 to:(id *)arg2 core:(id <XRAnalysisCoreReadOnly>)arg3;

@optional
- (XRAnalysisCoreTableQuery *)queryForRolledUpValue:(XRAnalysisCoreValue *)arg1;
@end

