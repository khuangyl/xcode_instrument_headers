//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXService.h"

#import "DTLeaksServiceAuthorizedRPC.h"
#import "DTLeaksServiceLegacyRPC.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface DTLeaksService : DTXService <DTLeaksServiceLegacyRPC, DTLeaksServiceAuthorizedRPC>
{
    NSObject<OS_dispatch_queue> *_coordinationQueue;
    NSObject<OS_dispatch_queue> *_preservationQueue;
    NSMutableDictionary *_helperConnectionByTargetPid;
    NSMutableDictionary *_helperPidByTargetPid;
    NSMutableDictionary *_fileByPid;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)requestLeaksForPid:(id)arg1 context:(id)arg2 provideBacktraces:(id)arg3;
- (id)requestVMregionStackLog:(int)arg1 forAddress:(unsigned long long *)arg2 size:(unsigned long long)arg3;
- (id)requestMallocStackLog:(int)arg1 forAddress:(unsigned long long *)arg2 size:(unsigned long long)arg3 isLiteZone:(unsigned int)arg4;
- (id)requestGraph:(unsigned long long)arg1 options:(id)arg2;
- (void)_lookupGraphByToken:(unsigned long long)arg1 response:(id)arg2;
- (id)_preserveDict:(id)arg1 forPid:(int)arg2;
- (void)_internalRequestForPid:(int)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messageReceived:(id)arg1;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

