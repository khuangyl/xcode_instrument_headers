//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFTThemeManager : NSObject
{
}

+ (id)outlineIcon;
+ (id)tableIcon;
+ (id)trackErrorImage;
+ (id)trackWarningImage;
+ (id)iconForFileType:(id)arg1;
+ (id)activeLargeAttributes;
+ (id)activeLCDColor;
+ (id)largeLCDFont;
+ (struct CGFunctionCallbacks)lightWindowBlend;
+ (struct CGFunctionCallbacks)windowBlend;
+ (struct CGSize)trackLabelForInvertedGraphDefaultSize;
+ (id)trackLabelForGraphInvertedAttributesWithSize:(id)arg1;
+ (id)trackLabelGraphShadow;
+ (id)trackLabelInvertedAttributes;
+ (id)trackGridColor;
+ (id)sourceHeaderBarAttributes;
+ (id)consolePromptAttributes;
+ (id)consoleStandardOutAttributes;
+ (id)consoleStandardInAttributes;
+ (id)dataViewerLibraryFrameAttributes;
+ (id)dataViewerControlBackgroundColor;
+ (id)dataViewerLabelFont;
+ (id)statusBarControlFont;
+ (id)dataViewerControlFontBold;
+ (id)dataViewerControlFont;
+ (id)dataViewerCategoryLabelFont;
+ (void)toggleColorLibraries;
+ (BOOL)colorLibraries;
+ (id)detailBackgroundColor;
+ (id)libraryCategoryBackgroundColor;
+ (id)libraryBackgroundColor;
+ (id)instrumentGraphLabelShadow;
+ (id)instrumentListBackgroundColor;
+ (id)gradientBackgroundSourceListHeader;
+ (id)bottomControlHorizontalColor;
+ (id)topControlHorizontalColor;
+ (void)drawTrackGlowInRect:(struct CGRect)arg1 forView:(id)arg2 deckUnits:(int)arg3 selected:(BOOL)arg4 bordered:(BOOL)arg5 inverted:(BOOL)arg6;
+ (id)unselectedTrackBorderColor;
+ (id)selectedTrackBorderColor;
+ (void)drawTrackGlowInRect:(struct CGRect)arg1 forView:(id)arg2 deckUnits:(int)arg3 selected:(BOOL)arg4;
+ (void)fillVerticalRect:(struct CGRect)arg1 forView:(id)arg2 withOperation:(struct CGFunctionCallbacks)arg3;
+ (void)fillHorizontalRect:(struct CGRect)arg1 forView:(id)arg2 withOperation:(struct CGFunctionCallbacks)arg3;
+ (id)emptyShadow;
+ (id)colorWithUserRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end

