//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

@class NSColor;

@interface XRCompressedStackFrameCell : NSCell
{
    NSColor *_color;
}

+ (double)suggestedCellHeight;
+ (id)sharedInstance;
@property(copy) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1;

@end
