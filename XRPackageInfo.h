//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSArray, NSData, NSError, NSString, NSURL;

@interface XRPackageInfo : NSObject <NSXMLParserDelegate>
{
    NSArray *_info;
    NSArray *_versionParts;
    NSArray *_builderVersionParts;
    NSURL *_packageURL;
    NSData *_checksum;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSData *checksum; // @synthesize checksum=_checksum;
@property(readonly, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
- (void).cxx_destruct;
- (BOOL)supersedes:(id)arg1;
- (BOOL)isValid;
- (void)_load;
@property(readonly, nonatomic) NSString *modelVersion;
@property(readonly, nonatomic) NSString *packageBuilderVersion;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;
- (id)initWithPackageURL:(id)arg1 group:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

