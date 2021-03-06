//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "XRInspectorSource.h"

@class DVTTextView, NSButton, NSString, NSTextField, XRAnnotation, XRInstrument;

@interface XRSourceTabView : NSView <XRInspectorSource>
{
    NSTextField *_valueField;
    NSButton *_inspectorButton;
    BOOL _showInspectorButton;
    XRInstrument *_instrument;
    int _valueType;
    XRAnnotation *_textAnnotation;
    DVTTextView *_textView;
}

@property(nonatomic) DVTTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) XRAnnotation *textAnnotation; // @synthesize textAnnotation=_textAnnotation;
- (void).cxx_destruct;
- (void)showInspectorButton:(BOOL)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (struct CGRect)spotRect;
- (id)documentUUID;
- (id)dataElementsForInspector:(id)arg1;
- (void)inspectorDismissed:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (void)toggleInspector:(id)arg1;
- (id)stringForValueType:(int)arg1;
- (int)valueType;
- (void)setValueType:(int)arg1;
- (void)setInstrument:(id)arg1;
- (void)setValue:(id)arg1;
- (struct CGRect)resetSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

