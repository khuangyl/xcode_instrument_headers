//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPopoverDelegate.h"

@class NSPopover, NSString, NSView;

@interface XRInspector : NSObject <NSPopoverDelegate>
{
    id <XRInspectorSource> _source;
    id <XRInspectorDelegate> _delegate;
    NSPopover *_popover;
    NSView *_positioningView;
    unsigned long long _preferredEdge;
}

@property(nonatomic) unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property(retain, nonatomic) NSView *positioningView; // @synthesize positioningView=_positioningView;
@property(retain, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <XRInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <XRInspectorSource> source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)close;
- (void)reload;
- (id)initWithSource:(id)arg1 popover:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
