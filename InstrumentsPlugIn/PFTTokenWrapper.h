//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PFTTokenWrapper : NSObject
{
    NSString *_displayString;
    NSObject *_representedObject;
}

- (void).cxx_destruct;
- (id)representedObject;
- (id)description;
- (id)displayString;
- (id)initWithString:(id)arg1 representingObject:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

