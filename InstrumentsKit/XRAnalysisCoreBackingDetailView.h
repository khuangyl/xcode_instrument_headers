//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CIFilter, NSBitmapImageRep;

@interface XRAnalysisCoreBackingDetailView : NSView
{
    NSView *_embeddedSubview;
    NSBitmapImageRep *_frozenOutImage;
    struct CGRect _frozenImageRect;
    CIFilter *_outFilter;
    BOOL _frozen;
    BOOL _busy;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)setBusy:(BOOL)arg1;
- (void)embedSubview:(id)arg1;
- (void)freezeAndRemoveEmbeddedView;

@end

