//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXAllowedRPC.h"

@class NSArray, NSDictionary, NSString;

@protocol DTXPCControlServiceRequests <DTXAllowedRPC>
- (void)stopObservationsForIdentifier:(NSString *)arg1 requestingProcess:(int)arg2;
- (void)observeServicesWithIdentifier:(NSString *)arg1 requestingProcess:(int)arg2 environment:(NSDictionary *)arg3 arguments:(NSArray *)arg4 options:(NSDictionary *)arg5;
@end

