//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTKPRecord;

__attribute__((visibility("hidden")))
@interface _DTKPPendingRecord : NSObject
{
    BOOL _userCallstackExpected;
    BOOL _userCallstackSeen;
    DTKPRecord *_record;
}

@property(retain, nonatomic) DTKPRecord *record; // @synthesize record=_record;
@property(nonatomic) BOOL userCallstackSeen; // @synthesize userCallstackSeen=_userCallstackSeen;
@property(nonatomic) BOOL userCallstackExpected; // @synthesize userCallstackExpected=_userCallstackExpected;
- (void).cxx_destruct;
- (id)init;

@end

