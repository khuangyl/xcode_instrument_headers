//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSTableColumn;

@interface XRAnalysisCoreTableViewColumnList : NSObject
{
    NSMutableArray *_contents;
    NSMutableDictionary *_itemsByIdent;
    NSMutableArray *_narrativeColumnItems;
    NSTableColumn *_timeColumn;
}

@property(readonly, nonatomic) NSArray *narrativeColumnItems; // @synthesize narrativeColumnItems=_narrativeColumnItems;
@property(readonly, nonatomic) NSTableColumn *timeColumn; // @synthesize timeColumn=_timeColumn;
@property(readonly, nonatomic) NSArray *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (id)itemWithColumnIdentifier:(id)arg1;
- (void)addItem:(id)arg1;
- (id)init;

@end

