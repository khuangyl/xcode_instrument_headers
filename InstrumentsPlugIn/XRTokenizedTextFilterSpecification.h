//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface XRTokenizedTextFilterSpecification : NSObject
{
    struct NSArray *_tokens;
    unsigned long long _mode;
}

+ (id)tokenizedTextFilterWithTokens:(struct NSArray *)arg1 mode:(unsigned long long)arg2;
+ (id)passAllFilter;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)shouldPassAll;
- (id)initWithTokens:(struct NSArray *)arg1 mode:(unsigned long long)arg2;
- (id)init;

@end
