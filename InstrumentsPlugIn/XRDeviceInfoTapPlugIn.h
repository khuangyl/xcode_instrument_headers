//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRTapPlugIn.h>

@interface XRDeviceInfoTapPlugIn : XRTapPlugIn
{
}

- (void)endRecording:(id)arg1;
- (unsigned long long)trailingEventHorizonForToken:(id)arg1;
- (void)_populateCapabilityTables:(id)arg1 device:(id)arg2 core:(id)arg3;
- (void)_populateSyscallNameMaps:(id)arg1 device:(id)arg2 core:(id)arg3;
- (void)_populateTimeInfoTables:(id)arg1 device:(id)arg2 trace:(id)arg3 runNumber:(long long)arg4 core:(id)arg5;
- (id)startRecordingTableIDs:(id)arg1 runNumber:(long long)arg2 trace:(id)arg3;

@end

