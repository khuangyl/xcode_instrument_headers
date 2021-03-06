//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, XRAnalysisCoreGroupBySpec;

@interface XRAnalysisCoreGraphTreatment : NSObject <NSSecureCoding>
{
    XRAnalysisCoreGroupBySpec *_groupByCriteria;
    NSArray *_selectionCriteria;
    NSString *_connectionColumn;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *connectionColumn; // @synthesize connectionColumn=_connectionColumn;
@property(copy, nonatomic) NSArray *selectionCriteria; // @synthesize selectionCriteria=_selectionCriteria;
@property(retain, nonatomic) XRAnalysisCoreGroupBySpec *groupByCriteria; // @synthesize groupByCriteria=_groupByCriteria;
- (void).cxx_destruct;
- (BOOL)workaround30300088;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

