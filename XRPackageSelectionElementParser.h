//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRXMLElementParser.h"

@class NSString, XRXMLTextElementParser;

@interface XRPackageSelectionElementParser : XRXMLElementParser
{
    BOOL _failedColumnCheck;
    XRXMLTextElementParser *_column;
    NSString *_switchName;
}

+ (id)_elementNameToKVCMap;
+ (id)_elementNameToClassMap;
@property(copy, nonatomic) NSString *switchName; // @synthesize switchName=_switchName;
@property(retain, nonatomic) XRXMLTextElementParser *column; // @synthesize column=_column;
- (void).cxx_destruct;
- (void)handleValueConstraint:(id)arg1;

@end
