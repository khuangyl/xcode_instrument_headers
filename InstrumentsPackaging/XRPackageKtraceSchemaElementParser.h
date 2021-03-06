//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPackaging/XRPackageSchemaElementParser.h>

@class NSMutableDictionary, NSMutableSet, NSMutableString, XRPackageKtraceModelingRuleSystem;

@interface XRPackageKtraceSchemaElementParser : XRPackageSchemaElementParser
{
    NSMutableString *_startMatchPattern;
    NSMutableString *_endMatchPattern;
    NSMutableString *_templates;
    NSMutableDictionary *_boundVariablesByTag;
    NSMutableSet *_boundVariables;
    XRPackageKtraceModelingRuleSystem *_ruleSystem;
}

+ (id)_elementNameToClassMap;
- (void).cxx_destruct;
- (void)didFinishParsingColumn:(id)arg1;
- (void)didFinishPatternElement:(id)arg1;
- (void)setIdentifierElement:(id)arg1;
- (void)_handleCompletion;
- (void)_handleStart;

@end

