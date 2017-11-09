//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTBorderedView.h"

@class NSMutableDictionary, NSView;

@interface XRScopeBarView : DVTBorderedView
{
    NSView *_lastElement;
    BOOL _lastIsSeparator;
    NSMutableDictionary *_buttonHandlers;
    CDUnknownBlockType _compositionDestructor;
}

+ (id)scopeBarFont;
- (void).cxx_destruct;
- (void)_scopeButtonClicked:(id)arg1;
- (void)removeAllSections;
- (void)addControlsSection:(id)arg1;
- (void)addScopingSection:(id)arg1 options:(int)arg2 configuration:(CDUnknownBlockType)arg3;
- (void)_addSectionSeparator;
- (void)_addControl:(id)arg1;
- (void)_appendDestructorBlock:(CDUnknownBlockType)arg1;
- (void)_registerButton:(id)arg1 inGroup:(id)arg2 options:(int)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
