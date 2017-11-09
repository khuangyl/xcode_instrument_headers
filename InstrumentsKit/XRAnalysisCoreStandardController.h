//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRInstrumentViewController.h"

@class NSArray, NSError, NSMutableArray, NSOperation, NSString, PFTTraceDocument, XRAnalysisCoreDetailViewController, XRAnalysisCoreTrackConfigurator, XRInstrument;

@interface XRAnalysisCoreStandardController : NSObject <XRInstrumentViewController>
{
    XRAnalysisCoreDetailViewController *_detailController;
    NSMutableArray *_subcontrollers;
    PFTTraceDocument *_document;
    XRAnalysisCoreTrackConfigurator *_trackConfigurator;
    NSOperation *_tableReqChangeOp;
    long long _selectedBrushIndex;
    XRInstrument *_instrument;
    NSError *_nextRecordingStatus;
}

@property(retain, nonatomic) NSError *nextRecordingStatus; // @synthesize nextRecordingStatus=_nextRecordingStatus;
@property(readonly, nonatomic) __weak XRInstrument *instrument; // @synthesize instrument=_instrument;
- (void).cxx_destruct;
- (id)detailSearchTarget;
- (id)detailFilteredDataSource;
- (void)refineSourceAnnotationQuery:(id)arg1;
- (id)currentRecordSettingsDetailMetaUI;
- (id)currentDisplaySettingsDetailMetaUI;
- (id)currentExtendedDetailMetaUI;
- (id)currentCallTreeFilter;
- (void)instrumentDidChangeSwitches;
- (void)requestDocumentInspectFlag:(id)arg1;
- (BOOL)requestDocumentSetInspectionTime:(unsigned long long)arg1;
- (void)documentSetInspectionTime:(unsigned long long)arg1;
- (void)documentDidUpdateBaseFilterForRunNumber:(long long)arg1;
- (struct XRTimeRange)documentsSelectedTimeRange;
- (void)eventHorizonAdvancedThroughRange:(struct XRTimeRange)arg1;
- (void)instrumentChangedTableRequirements;
- (void)_refreshPlan;
- (id)plan;
- (void)instrumentWillBecomeInvalid;
- (id)init;
- (id)initWithInstrument:(id)arg1 document:(id)arg2;
- (void)checkpointUI;
- (void)currentBrushBecameStale;
- (void)didRecordDataInTimeRange:(struct XRTimeRange)arg1;
- (BOOL)resolution:(unsigned long long)arg1 differsFrom:(unsigned long long)arg2 runNumber:(long long)arg3 strategy:(struct NSString *)arg4;
- (void)configureTrack:(id)arg1;
- (void)configureTrackOverlay:(id)arg1;
- (id)detailContextContainer;
@property long long selectedBrushIndex;
@property(readonly, nonatomic) NSArray *brushNames;
@property(retain, nonatomic) NSString *currentBrushName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
