//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSArray, NSMutableSet, NSString, NSURL;

@interface XRPackage : NSManagedObject
{
    NSURL *__contentURLCache;
    NSURL *_contentURLDuringConstruction;
}

- (void).cxx_destruct;
- (BOOL)packageIsConflictFree:(id *)arg1;
- (void)_setBaseURLDuringPackageConstruction:(id)arg1;
- (id)implementationRequirements;
- (id)linkName;
- (id)packageInfoURL;
- (id)templatesURL;
- (id)packageDescriptionURL;
- (id)fullDocumentationURL;
- (id)documentationURL;
- (id)otherVersions;
- (id)extensionsFolderURL;
- (id)packageAnalysisCoreExtensionURL;
- (id)analysisCoreSchemataURL;
- (id)distributionURL;
- (id)contentsFolderURL;
- (id)newDefinedTraceParameter;
- (id)newModeler;
- (id)newAugmentation;
- (id)newInstrument;
- (id)newSchemaForward;
- (id)newSchemaDefinition;

// Remaining properties
@property(readonly) NSMutableSet *augmentations; // @dynamic augmentations;
@property(retain) NSString *identifier; // @dynamic identifier;
@property(readonly) NSMutableSet *instruments; // @dynamic instruments;
@property(readonly) NSMutableSet *modelers; // @dynamic modelers;
@property(readonly) NSMutableSet *schemata; // @dynamic schemata;
@property(readonly) NSArray *schemataDefinitions; // @dynamic schemataDefinitions;
@property(readonly) NSArray *schemataForwards; // @dynamic schemataForwards;
@property(retain) NSString *title; // @dynamic title;

@end

