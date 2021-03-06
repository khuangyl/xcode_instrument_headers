//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRDataElement.h"

@class DVTExtension, NSMenu, NSMutableArray, NSString, NSView, _BindObject;

@interface PFTDataElement : NSObject <XRDataElement>
{
    NSString *_category;
    NSString *_title;
    BOOL _editable;
    _BindObject *_value;
    NSView *_view;
    struct CGRect _enclosingRect;
    BOOL _displayByDefault;
    BOOL _overrideUserDefaults;
    NSString *_noticeMessage;
    BOOL _elementEnabled;
    BOOL _editableWhileRunning;
    NSString *_documentUUID;
    BOOL _displaysSelection;
    id _targetNotRetained;
    NSMutableArray *_keyPaths;
    Class _clz;
    NSMenu *_actionMenu;
    id _owner;
    DVTExtension *_extension;
    unsigned long long _style;
}

+ (id)createForType:(id)arg1 category:(id)arg2 title:(id)arg3 editable:(BOOL)arg4 objectValue:(id)arg5;
+ (void)initialize;
@property(retain) DVTExtension *extension; // @synthesize extension=_extension;
@property(retain) NSMenu *actionMenu; // @synthesize actionMenu=_actionMenu;
- (void).cxx_destruct;
- (BOOL)dataViewCanResize;
- (void)configureConfigurationButton:(id)arg1;
- (id)menuItemGroup;
- (id)view;
- (id)createView;
- (id)noticeMessage;
- (void)setNoticeMessage:(id)arg1;
- (id)documentUUID;
- (void)setDocumentUUID:(id)arg1;
- (id)dataType;
- (struct CGRect)enclosingRect;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)bindObject;
- (void)setElementEnabled:(BOOL)arg1;
- (BOOL)elementEnabled;
- (id)keyPaths;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)unbindTarget;
- (void)bindTarget:(id)arg1 toKeyPathArray:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)bindTarget:(id)arg1 toKeyPaths:(id)arg2;
- (void)noteSearchCriteria:(id)arg1;
- (BOOL)isSearchCriteriaReady;
- (id)tooltipForSearchCriteria;
- (id)searchCriteria;
- (BOOL)isSearchCriteria;
- (BOOL)hasEnabledSettings;
- (BOOL)inlinable;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void)setDisplaysSelection:(BOOL)arg1;
- (BOOL)displaysSelection;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (BOOL)editableWhileRunning;
- (void)setEditableWhileRunning:(BOOL)arg1;
- (BOOL)overrideUserDefaults;
- (void)setOverrideUserDefaults:(BOOL)arg1;
- (BOOL)displayByDefault;
- (void)setDisplayByDefault:(BOOL)arg1;
- (BOOL)acceptsFirstResponderInContent;
- (void)setEditable:(BOOL)arg1;
- (BOOL)isEditable;
- (id)summary;
- (id)description;
- (void)setCategory:(id)arg1;
- (id)category;
- (id)activeDescription;
- (void)dealloc;
- (void)setup;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)initWithTitle:(id)arg1 editable:(BOOL)arg2 value:(id)arg3 viewer:(Class)arg4 owner:(id)arg5;
- (id)init;
- (id)initWithExtension:(id)arg1;

@end

