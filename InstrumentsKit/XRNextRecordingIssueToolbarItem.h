//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsKit/XRToolbarItem.h>

#import "NSPopoverDelegate.h"

@class NSImage, NSPopover, NSString, XRNextRecordingIssueViewController;

@interface XRNextRecordingIssueToolbarItem : XRToolbarItem <NSPopoverDelegate>
{
    XRNextRecordingIssueViewController *_popoverController;
    NSPopover *_popover;
    NSImage *_errorImage;
    NSImage *_warningImage;
}

- (void).cxx_destruct;
- (void)disconnectFromContext;
- (void)connectToContext:(id)arg1;
- (id)_createButton;
- (void)issuesClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateButtonState;
- (void)popoverDidClose:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
