//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XRAnalysisCoreViewFindContext : NSObject
{
    long long _nextColID;
    int _lastDirection;
    BOOL _ignoreCase;
    BOOL _skipCurrent;
    BOOL _autoExpand;
    int _status;
    int _direction;
    NSString *_columnIdentifier;
    NSString *_term;
    NSString *_category;
    struct _NSRange _characterRangeOfMatch;
}

@property(nonatomic) BOOL autoExpand; // @synthesize autoExpand=_autoExpand;
@property(nonatomic) BOOL skipCurrent; // @synthesize skipCurrent=_skipCurrent;
@property(nonatomic) BOOL ignoreCase; // @synthesize ignoreCase=_ignoreCase;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *term; // @synthesize term=_term;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) struct _NSRange characterRangeOfMatch; // @synthesize characterRangeOfMatch=_characterRangeOfMatch;
@property(readonly, nonatomic) NSString *columnIdentifier; // @synthesize columnIdentifier=_columnIdentifier;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)_restart;
- (id)init;
- (BOOL)_performFindNext;
- (void)_searchExhausted;
- (void)_foundItemAtNextAbstractionAtRange:(struct _NSRange)arg1;
- (void)_advance;

@end
