//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionView.h"

#import "NSAccessibilityGroup.h"

@class NSString;

@interface XRTemplateChooserCollectionView : NSCollectionView <NSAccessibilityGroup>
{
}

- (void)setAccessibilitySelectedChildren:(id)arg1;
- (id)accessibilitySelectedChildren;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertNewline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

