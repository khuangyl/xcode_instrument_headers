//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXAllowedRPC.h"

@class NSDictionary;

@protocol XRRemoteDeviceAuthorizedAPI <DTXAllowedRPC>
- (void)thermalLevelNotification:(NSDictionary *)arg1;
- (void)memoryLevelNotification:(NSDictionary *)arg1;
- (void)applicationStateNotification:(NSDictionary *)arg1;
- (void)dyldNotificationReceived:(NSDictionary *)arg1;
@end
