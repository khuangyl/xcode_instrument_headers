//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XRAnalysisCoreProjectionViewContent, XRAnalysisCoreRollUpChangeSequence, XRAnalysisCoreRollUpController, XREngineeringTypeFormatter;

@interface XRAnalysisCoreProjectionRendableContent : NSObject
{
    XRAnalysisCoreProjectionViewContent *_abstractContent;
    XRAnalysisCoreRollUpController *_rollUpController;
    XREngineeringTypeFormatter *_formatter;
    XRAnalysisCoreRollUpChangeSequence *_changes;
}

@property(retain, nonatomic) XRAnalysisCoreRollUpChangeSequence *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) XREngineeringTypeFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) XRAnalysisCoreRollUpController *rollUpController; // @synthesize rollUpController=_rollUpController;
@property(retain, nonatomic) XRAnalysisCoreProjectionViewContent *abstractContent; // @synthesize abstractContent=_abstractContent;
- (void).cxx_destruct;

@end

