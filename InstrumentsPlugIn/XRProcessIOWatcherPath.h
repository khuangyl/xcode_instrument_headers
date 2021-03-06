//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRProcessIOWatcher.h>

#import "XRFileObserver.h"

@class NSFileHandle, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface XRProcessIOWatcherPath : XRProcessIOWatcher <XRFileObserver>
{
    NSString *_stdoutFilePath;
    BOOL _removeWhenDone;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSFileHandle *_stdoutHandle;
    long long _curFileOffset;
    NSObject<OS_dispatch_semaphore> *_lock;
    BOOL _queryActive;
}

@property(nonatomic) BOOL queryActive; // @synthesize queryActive=_queryActive;
- (void).cxx_destruct;
- (void)rescanPath:(id)arg1;
- (void)_readFile;
- (void)invalidate;
- (void)dealloc;
- (id)initForPid:(int)arg1 fromDevice:(id)arg2 stdoutPath:(id)arg3 removeWhenDone:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

