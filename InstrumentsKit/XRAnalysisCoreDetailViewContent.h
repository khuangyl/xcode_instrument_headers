//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PFTTraceDocument, XRAnalysisCoreUIPlan, XRTrace;

@interface XRAnalysisCoreDetailViewContent : NSObject
{
    BOOL _showDebuggingUI;
    unsigned int _tableID;
    PFTTraceDocument *_document;
    XRTrace *_trace;
    long long _runNumber;
    NSString *_instrumentUUID;
    XRAnalysisCoreUIPlan *_plan;
    NSString *_accessibilityTitle;
    NSString *_accessibilityLabel;
}

@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
@property(nonatomic) BOOL showDebuggingUI; // @synthesize showDebuggingUI=_showDebuggingUI;
@property(retain, nonatomic) XRAnalysisCoreUIPlan *plan; // @synthesize plan=_plan;
@property(retain, nonatomic) NSString *instrumentUUID; // @synthesize instrumentUUID=_instrumentUUID;
@property(nonatomic) long long runNumber; // @synthesize runNumber=_runNumber;
@property(nonatomic) __weak XRTrace *trace; // @synthesize trace=_trace;
@property(nonatomic) __weak PFTTraceDocument *document; // @synthesize document=_document;
@property(nonatomic) unsigned int tableID; // @synthesize tableID=_tableID;
- (void).cxx_destruct;
- (BOOL)isValidColumnIdentifier:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

