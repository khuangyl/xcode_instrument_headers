//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTInstrument.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "XRExportDataProtocol.h"
#import "XRSearchTargetHelper.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PFTTableDetailView, XRCallTreeDetailView;

@interface PFTDTraceInstrument : PFTInstrument <XRExportDataProtocol, XRSearchTargetHelper, NSTableViewDataSource, NSTableViewDelegate>
{
    NSString *_dtraceScript;
    NSArray *_eventDescriptors;
    NSMutableArray *_eventDescriptorsWithOutput;
    NSMutableDictionary *_eventDescriptorsDisplayable;
    NSMutableArray *_eventTypes;
    BOOL _didComputeDescriptors;
    BOOL _didComputeScript;
    unsigned long long _timeOffset;
    int _instrumentRunNumber;
    BOOL _isRemoved;
    PFTTableDetailView *_detailView;
    XRCallTreeDetailView *_callTreeDetailView;
    BOOL _viewAsCallTree;
    unsigned long long _rowsDisplayedInDetailView;
    unsigned long long _maxAttributeCount;
    NSMutableArray *_variablesToUse;
    NSMutableArray *_fieldsToUse;
    NSMutableArray *_allVariables;
    NSMutableArray *_allFields;
    NSMutableDictionary *_statisticsToDisplay;
    NSMutableArray *_existingEnabledDefaults;
    BOOL _sortAscending;
    BOOL _usesPidProvider;
    NSMutableArray *_quants;
    NSString *_maxStackDepth;
    NSString *_filterContext;
    BOOL _needsFilterRefresh;
    NSDictionary *_restoredPrefs;
}

+ (id)createCallTraceInstrumentForSymbol:(id)arg1 module:(id)arg2 onEnter:(BOOL)arg3 onExit:(BOOL)arg4;
@property(copy) NSString *maxStackDepth; // @synthesize maxStackDepth=_maxStackDepth;
- (void)halfTick:(id)arg1;
- (BOOL)requiresHalfTickNotification;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)addColumnsToCallTreeDetailView:(id)arg1;
- (void)addColumnsToDetailView:(id)arg1;
- (void)defaultViewSymbolAction:(id)arg1;
- (void)_singleClick:(id)arg1;
- (void)_selectionDidChange:(id)arg1;
- (void)trackFocusedOnEventAtUnfilteredIndex:(unsigned long long)arg1;
- (void)setNeedsFilterRefresh;
- (void)refreshFiltersNow;
- (void)reloadDetailViews;
- (void)downloadDSYM:(id)arg1;
- (void)symbolicateAddress:(id)arg1;
- (void)locateAndSymbolicateAddress:(id)arg1;
- (id)menuForDetailViewRow:(id)arg1 andColumn:(id)arg2;
- (id)dataMiningMenu;
- (BOOL)supportsDataMining;
- (BOOL)viewAsCallTree;
- (void)setViewAsCallTree:(BOOL)arg1;
- (BOOL)supportsCallTree;
- (id)detailViewLabelForType:(unsigned long long)arg1;
- (BOOL)detailViewRequiresScrollView:(id)arg1;
- (void)_flagChanged:(id)arg1;
- (id)searchContexts;
- (id)selectedSearchContext;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (void)setCurrentBrushName:(id)arg1;
- (void)configureTrack:(id)arg1;
- (id)_fixupLoadedBrushName:(id)arg1;
- (id)eventTypes;
- (id)brushNames;
- (id)existingEnabledDefaults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setDetailViewType:(unsigned long long)arg1;
- (void)_updateDetailElements;
- (id)dataElementsForContext:(id)arg1;
- (void)_createViews;
- (id)backtraceForVisibleRow:(unsigned long long)arg1;
- (id)dataElementsForExtendedEventViewContext;
- (id)dataElementsForTrackViewSetupContext;
- (id)_activeDetailView;
- (BOOL)_isRemoved;
- (void)_remove;
- (id)createRun;
- (BOOL)setSelectedRunIndex:(unsigned long long)arg1;
- (BOOL)usesPidProvider;
- (int)_waitInterval;
- (unsigned int)_maxRecordLength;
- (char *)_bufferSize;
- (const char *)_dtraceScript;
- (void)_prepareProbe;
- (char *)_dtraceOutputPath;
- (id)eventDescriptorsToStringUsingNumberPrefix:(long long)arg1 includeSwitch:(BOOL)arg2 externalTarget:(int)arg3;
- (id)_eventDescriptorsToExportStringUsingNumberPrefix:(long long)arg1 includeSwitch:(BOOL)arg2 externalTarget:(int)arg3;
- (id)_eventDescriptorsToStringUsingNumberPrefix:(long long)arg1 includeSwitch:(BOOL)arg2;
- (id)_substituteVariablesForScript:(id)arg1;
- (void)addTrackSegment:(BOOL)arg1;
- (void)setTargetType:(int)arg1;
- (void)stopRecording;
- (void)_endCommand:(id)arg1;
- (void)_startCommand:(id)arg1 instrumentNumber:(int)arg2;
- (BOOL)acceptCommand:(id)arg1;
- (void)restoreFromTraceTemplateData:(id)arg1;
- (id)traceTemplateData;
- (id)allCurrentOutputDescriptors;
- (id)outputDescriptorAtIndex:(unsigned long long)arg1;
- (id)argTableSkipList;
- (void)setType:(id)arg1;
- (void)exportSelectedRunInFormat:(int)arg1 toPath:(id)arg2;
- (void)dealloc;
- (void)invalidate;
- (void)computeEventDescriptorsWithOutput;
- (void)_clearProbeData;
- (void)setEventDescriptors:(id)arg1;
- (void)_setScript:(id)arg1;
- (void)observeStatistics;
- (void)unobserveStatistics;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
