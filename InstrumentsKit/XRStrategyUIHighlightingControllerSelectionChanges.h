//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTTimelinePlane;

__attribute__((visibility("hidden")))
@interface XRStrategyUIHighlightingControllerSelectionChanges : NSObject
{
    DTTimelinePlane *_selectedPlane;
    struct XRTimeRange _selectedTimeRange;
}

@property(nonatomic) struct XRTimeRange selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(retain, nonatomic) DTTimelinePlane *selectedPlane; // @synthesize selectedPlane=_selectedPlane;
- (void).cxx_destruct;

@end
