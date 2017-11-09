//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSArray, NSButton, NSTrackingArea, NSView, XRActionContext;

@interface XRNavButtonsTextCellView : NSTableCellView
{
    NSView *_mainContentView;
    NSButton *_actionButton;
    id _target;
    SEL _action;
    NSTrackingArea *_fullViewTrackingArea;
    NSArray *_visibleActionButtonLayoutConstraints;
    NSArray *_normalLayoutConstraints;
    BOOL _actionButtonVisible;
    XRActionContext *_actionContext;
}

+ (BOOL)_mainContentViewIsPrimaryTextField;
+ (id)_createMainContentView;
@property(retain, nonatomic) XRActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (void).cxx_destruct;
- (BOOL)_actionButtonHugsLeftEdge;
- (id)_mainContentView;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (void)updateConstraints;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_showActionButtonIfNeeded;
- (void)_hideActionButtonIfNeeded;
- (void)_lazyInitActionButtonSupport;
- (void)_actionButtonClick:(id)arg1;
- (void)addButtonWithIdentifier:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

