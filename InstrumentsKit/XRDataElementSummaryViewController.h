//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class DVTGradientImageButton, NSLayoutConstraint, NSTextField, NSView, PFTDataElement;

@interface XRDataElementSummaryViewController : NSViewController
{
    unsigned long long _style;
    BOOL _firstElement;
    BOOL _lastElement;
    PFTDataElement *_element;
    NSTextField *_titleField;
    DVTGradientImageButton *_configurationButton;
    NSView *_dataView;
    NSLayoutConstraint *_dataTopConstraint;
    NSLayoutConstraint *_contentLeftConstraint;
    NSLayoutConstraint *_contentTopConstraint;
}

@property __weak NSLayoutConstraint *contentTopConstraint; // @synthesize contentTopConstraint=_contentTopConstraint;
@property __weak NSLayoutConstraint *contentLeftConstraint; // @synthesize contentLeftConstraint=_contentLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dataTopConstraint; // @synthesize dataTopConstraint=_dataTopConstraint;
@property(nonatomic) __weak NSView *dataView; // @synthesize dataView=_dataView;
@property(nonatomic) __weak DVTGradientImageButton *configurationButton; // @synthesize configurationButton=_configurationButton;
@property(nonatomic) __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property(nonatomic) BOOL lastElement; // @synthesize lastElement=_lastElement;
@property(nonatomic) BOOL firstElement; // @synthesize firstElement=_firstElement;
@property(readonly, nonatomic) PFTDataElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)reloadData;
- (void)awakeFromNib;
- (id)initWithDataElement:(id)arg1 style:(unsigned long long)arg2;

@end
