//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XRSearchArguments : NSObject
{
    BOOL _ignoreCase;
    BOOL _autoExpand;
    BOOL _skipCurrent;
    NSString *_searchTerm;
    NSString *_category;
}

@property(nonatomic) BOOL skipCurrent; // @synthesize skipCurrent=_skipCurrent;
@property(nonatomic) BOOL autoExpand; // @synthesize autoExpand=_autoExpand;
@property(nonatomic) BOOL ignoreCase; // @synthesize ignoreCase=_ignoreCase;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void).cxx_destruct;

@end

