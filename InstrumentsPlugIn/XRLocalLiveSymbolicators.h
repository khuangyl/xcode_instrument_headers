//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, XRSymbolicatorsByPid;

@interface XRLocalLiveSymbolicators : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;
    struct TFPPidWatcher _watcher;
    XRSymbolicatorsByPid *_symbolicatorsByPid;
    unsigned short _trackingCount;
}

- (void).cxx_destruct;
- (struct _CSTypeRef)symbolicatorForPid:(int)arg1;
- (void)disableTracking;
- (void)enableTracking:(struct AuthorizationOpaqueRef *)arg1;
- (id)init;

@end
