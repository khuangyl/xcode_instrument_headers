//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, XRAnalysisCoreProjectionRendableContent, XRAnalysisCoreProjectionViewContent, XREngineeringTypeFormatter, XRTokenizedTextFilterSpecification;

@interface XRAnalysisCoreProjectionContentRequest : NSObject
{
    XRAnalysisCoreProjectionViewContent *_abstractContent;
    XREngineeringTypeFormatter *_formatter;
    NSArray *_sortDescriptors;
    XRTokenizedTextFilterSpecification *_outlineColumnFilter;
    XRAnalysisCoreProjectionRendableContent *_lastRendableContent;
}

@property(retain, nonatomic) XRAnalysisCoreProjectionRendableContent *lastRendableContent; // @synthesize lastRendableContent=_lastRendableContent;
@property(retain, nonatomic) XRTokenizedTextFilterSpecification *outlineColumnFilter; // @synthesize outlineColumnFilter=_outlineColumnFilter;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) XREngineeringTypeFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) XRAnalysisCoreProjectionViewContent *abstractContent; // @synthesize abstractContent=_abstractContent;
- (void).cxx_destruct;

@end

