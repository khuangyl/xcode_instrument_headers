//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSAccessibilityElement.h"

@class NSImageView, NSString, XRTemplateChooserSelectionView, XRTemplateChooserTextField;

@interface XRTemplateItemView : NSView <NSAccessibilityElement>
{
    id _delegate;
    XRTemplateChooserTextField *_textField;
    XRTemplateChooserSelectionView *_selectionView;
    NSImageView *_imageView;
}

@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) XRTemplateChooserSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) XRTemplateChooserTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)acceptsFirstResponder;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

