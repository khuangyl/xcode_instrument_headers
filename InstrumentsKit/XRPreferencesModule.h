//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPreferencesModule.h"

#import "XRUIModelChangeObserver.h"

@class NSView;

@interface XRPreferencesModule : NSPreferencesModule <XRUIModelChangeObserver>
{
    NSView *preferencesView;
}

- (void).cxx_destruct;
- (void)modelDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

