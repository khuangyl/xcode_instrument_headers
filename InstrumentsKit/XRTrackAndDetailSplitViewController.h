//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitViewController.h"

@class NSLayoutConstraint, NSView;

@interface XRTrackAndDetailSplitViewController : NSSplitViewController
{
    NSLayoutConstraint *_forcedBottomHeightConstraint;
}

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) NSView *bottomCtrlView;
- (id)topCtrlView;

@end

