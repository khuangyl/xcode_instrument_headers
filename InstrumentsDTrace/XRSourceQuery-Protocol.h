//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSNumber, NSOperation, XRCallTreeInformation, XRCodeManager;

@protocol XRSourceQuery
- (NSArray *)operation:(NSOperation *)arg1 commentsForSymbol:(id <CommonSymbol>)arg2 inSourceManager:(XRCodeManager *)arg3 callTreeInformation:(XRCallTreeInformation *)arg4;

@optional
- (NSArray *)operation:(NSOperation *)arg1 commentsForSymbol:(id <CommonSymbol>)arg2 forProcess:(int)arg3 inSourceManager:(XRCodeManager *)arg4 callTreeInformation:(XRCallTreeInformation *)arg5;
- (NSNumber *)sourceQueriesMustRunOnMainThread;
@end

