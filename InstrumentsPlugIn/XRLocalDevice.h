//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRDevice.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, XRLocalExpiredPidCache, XRLocalLiveSymbolicators;

@interface XRLocalDevice : XRDevice
{
    NSMutableDictionary *_deathSourcesByPid;
    NSMutableSet *_awaitingActivation;
    NSMapTable *_observedDevicePathsByObserver;
    NSMutableDictionary *_pidToProcessIODictionary;
    XRLocalLiveSymbolicators *_localLiveSymbolicators;
    XRLocalExpiredPidCache *_expiredPidCache;
    struct AuthorizationOpaqueRef *_traceAuthorization;
    struct AuthorizationOpaqueRef *_authorizationForDTrace;
    NSObject<OS_dispatch_queue> *_deviceAuthGuard;
    NSMutableDictionary *_taskPorts;
}

+ (id)localDevice;
+ (void)initialize;
- (void).cxx_destruct;
- (id)deviceArchitecture;
- (struct _CSTypeRef)_symbolicatorFromExpiredPidCache:(int)arg1;
- (struct _CSTypeRef)_symbolicatorFromLiveSymbolicatorService:(int)arg1;
- (struct AuthorizationOpaqueRef *)obtainAuthorizatonForDTrace;
- (BOOL)authorize:(int)arg1;
- (unsigned int)taskForPid:(int)arg1;
- (id)makeConnection;
- (void)activateProcess:(id)arg1;
- (void)terminateProcess:(id)arg1;
- (BOOL)resumeProcess:(id)arg1;
- (BOOL)suspendProcess:(id)arg1;
- (int)launchProcess:(id)arg1 suspended:(BOOL)arg2 error:(id *)arg3;
- (void)addIOWatcher:(id)arg1 forPid:(int)arg2;
- (BOOL)handlePotentialSUIDProblems:(id)arg1 error:(id *)arg2;
- (void)_processDeathDetected:(int)arg1;
- (void)removeObserver:(id)arg1 forPid:(int)arg2;
- (void)addObserver:(id)arg1 forPid:(int)arg2;
- (void)enableLiveSymbolicatorService:(BOOL)arg1;
- (void)enableTerminatedPidCaching:(BOOL)arg1;
- (struct _CSTypeRef)createKernelSymbolicator;
- (struct _CSArchitecture)_kernelArchitecture;
- (struct _CSTypeRef)createSymbolicatorForPid:(int)arg1;
- (id)architecturesForPath:(id)arg1;
- (BOOL)executableIsRestricted:(id)arg1 launchOptions:(id)arg2;
- (BOOL)isRunningPid:(int)arg1;
- (id)environmentForPid:(int)arg1;
- (id)execnameForPid:(int)arg1;
- (id)_processNameFromCommandName:(id)arg1 path:(id)arg2;
- (id)_lookupPathForBundleIdentifier:(id)arg1;
- (id)userForUID:(id)arg1;
- (void)_appDidLaunch:(id)arg1;
- (id)runningProcesses;
- (id)fileSystem;
- (BOOL)supportsTransparentApplicationLifecycle;
- (void)sendInput:(id)arg1 toPid:(int)arg2;
- (BOOL)supportsKernelBacktracing;
- (BOOL)supportsStandardInput;
- (void)removeFilesystemObserver:(id)arg1;
- (void)addFilesystemObserver:(id)arg1 forPaths:(id)arg2;
- (id)displayNameForNetworkInterface:(id)arg1;
- (id)_supportedKDebugEvents:(id *)arg1;
- (id)_dtkpCPU:(id *)arg1;
- (id)cpuDescription;
- (int)speedOfCpus;
- (int)numberOfCpus;
- (int)numberOfPhysicalCpus;
- (BOOL)isAppleInternal;
- (BOOL)isDevelopmentDevice;
- (BOOL)isOnLine;
- (id)marketizedPlatformName;
- (id)platformName;
- (BOOL)isLocal;
- (id)hostState;
- (id)initWithTemplateData:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

