//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXAllowedRPC.h"

@class NSNumber, NSString;

@protocol DTProcessControlObserver <DTXAllowedRPC>
- (void)outputReceived:(NSString *)arg1 fromProcess:(int)arg2 atTime:(unsigned long long)arg3;
- (void)pidDiedCallback:(NSNumber *)arg1;
@end

