//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRIssueResponder.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, XRTrace;

@interface XRCoreDataIssueResponder : NSObject <XRIssueResponder>
{
    long long _runNumber;
    unsigned long long _state;
    unsigned long long _unique;
    BOOL _autosave;
    XRTrace *_trace;
    unsigned long long _runIssueErrorCountForCurrentRun;
    unsigned long long _runIssueWarningCountForCurrentRun;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    unsigned long long _maxIssueCountForType;
    NSManagedObjectModel *_managedObjectModel;
}

@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(nonatomic) BOOL autosave; // @synthesize autosave=_autosave;
@property(nonatomic) unsigned long long maxIssueCountForType; // @synthesize maxIssueCountForType=_maxIssueCountForType;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(nonatomic) unsigned long long runIssueWarningCountForCurrentRun; // @synthesize runIssueWarningCountForCurrentRun=_runIssueWarningCountForCurrentRun;
@property(nonatomic) unsigned long long runIssueErrorCountForCurrentRun; // @synthesize runIssueErrorCountForCurrentRun=_runIssueErrorCountForCurrentRun;
@property(nonatomic) long long runNumber; // @synthesize runNumber=_runNumber;
@property(readonly, nonatomic) __weak XRTrace *trace; // @synthesize trace=_trace;
- (void).cxx_destruct;
- (unsigned long long)_currentRunRecordingIssueCountForType:(unsigned long long)arg1;
- (void)applyWindowTimeShift:(unsigned long long)arg1;
- (void)performSave;
- (void)handleIssue:(id)arg1 type:(unsigned long long)arg2 from:(id)arg3;
- (void)_addIssue:(id)arg1 type:(unsigned long long)arg2 parentIssue:(id)arg3;
@property(readonly, nonatomic) BOOL isValid;
- (id)initWithTrace:(id)arg1 uniqueType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

