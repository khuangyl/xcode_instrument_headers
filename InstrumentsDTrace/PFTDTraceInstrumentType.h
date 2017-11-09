//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTExtensionBasedInstrumentType.h"

@class NSDictionary, NSMutableArray, NSURL;

@interface PFTDTraceInstrumentType : PFTExtensionBasedInstrumentType
{
    NSDictionary *_probe;
    NSMutableArray *_eventTypes;
    NSURL *_fileURL;
}

+ (id)typeWithPlugIn:(id)arg1 XMLElement:(id)arg2 fileURL:(id)arg3;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (id)eventTypes;
@property(readonly) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)probeCopy;
- (id)probe;
- (void)setProbe:(id)arg1;
- (id)dTracePlugIn;
- (id)initWithPlugIn:(id)arg1 data:(id)arg2 fileURL:(id)arg3;

@end
