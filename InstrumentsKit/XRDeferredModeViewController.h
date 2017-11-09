//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsKit/XRNonInteractiveModeViewController.h>

@class NSProgressIndicator, NSTextField;

@interface XRDeferredModeViewController : XRNonInteractiveModeViewController
{
    NSTextField *_progressText;
    NSProgressIndicator *_progressView;
    NSTextField *_progressAdditionalText;
}

@property __weak NSTextField *progressAdditionalText; // @synthesize progressAdditionalText=_progressAdditionalText;
@property __weak NSProgressIndicator *progressView; // @synthesize progressView=_progressView;
@property __weak NSTextField *progressText; // @synthesize progressText=_progressText;
- (void).cxx_destruct;
- (void)_setProgressMessage:(id)arg1 additionalMessage:(id)arg2;
- (void)_setProgressCompletion:(double)arg1;
- (void)viewDidLoad;
- (id)init;

@end

