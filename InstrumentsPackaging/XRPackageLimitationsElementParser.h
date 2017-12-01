//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRXMLElementParser.h"

@class NSMutableDictionary, NSMutableSet;

@interface XRPackageLimitationsElementParser : XRXMLElementParser
{
    NSMutableSet *_fullyDisableOnPlatform;
    NSMutableDictionary *_disableTargetTypesByPlatform;
    NSMutableDictionary *_disableRecordingModeByPlatform;
    NSMutableDictionary *_requiredCapabilitiesByPlatform;
    NSMutableDictionary *_universalRequiredCapabilities;
    NSMutableDictionary *_modeSpecificRequiredCapabilities;
}

+ (id)_elementNameToClassMap;
+ (id)allModes;
+ (id)allPlatforms;
- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)disableOnPlatformSet:(id)arg1 onAssertionFailure:(id)arg2 failureMessage:(id)arg3;
- (void)disableOnPlatformSet:(id)arg1 recordingMode:(id)arg2;
- (void)disableOnPlatformSet:(id)arg1;
- (void)disableInMode:(id)arg1 missingCapability:(id)arg2 minVersion:(id)arg3;
- (void)disableOnPlatformSet:(id)arg1 missingCapability:(id)arg2 minVersion:(id)arg3;
- (void)disableOnPlatformSet:(id)arg1 targetMode:(id)arg2;

@end

