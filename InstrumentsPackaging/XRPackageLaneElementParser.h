//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPackaging/XRPackageElementParserBase.h>

@class NSString;

@interface XRPackageLaneElementParser : XRPackageElementParserBase
{
    NSString *_tableRef;
}

+ (id)_elementNameToKVCMap;
+ (id)_elementNameToClassMap;
@property(copy, nonatomic) NSString *tableRef; // @synthesize tableRef=_tableRef;
- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleStart;

@end

