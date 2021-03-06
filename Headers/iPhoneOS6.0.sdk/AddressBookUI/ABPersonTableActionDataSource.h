/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface ABPersonTableActionDataSource : XXUnknownSuperclass {
@private
	NSMutableArray* _topActions;
	NSMutableArray* _bottomActions;
	CFDictionaryRef _actionsByProperty;
	CFDictionaryRef _actionGroupingsByProperty;
	CFDictionaryRef _inlineActionsByProperty;
	CFSetRef _hiddenActions;
}
-(int)actionCountForActionGrouping:(int)actionGrouping;
-(int)actionCountForProperty:(int)property withActionGrouping:(int)actionGrouping;
-(id)actionForProperty:(int)property withActionGrouping:(int)actionGrouping atIndex:(int)index;
-(CFDictionaryRef)actionGroupingsByProperty;
-(id)actionWithActionGrouping:(int)actionGrouping atIndex:(int)index;
-(CFDictionaryRef)actionsByProperty;
-(id)actionsForProperty:(int)property withActionGrouping:(int)actionGrouping;
-(id)actionsForProperty:(int)property withActionGroupingAtIndex:(int)index;
-(id)addActionWithTitle:(id)title shortTitle:(id)title2 detailText:(id)text style:(int)style target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;
-(id)bottomActions;
-(void)dealloc;
-(int)groupingCountForProperty:(int)property;
-(CFArrayRef)groupingsForProperty:(int)property;
-(BOOL)hasActionWithTarget:(id)target selector:(SEL)selector matchProperty:(BOOL)property property:(int)property4 inArray:(id)array outActions:(id*)actions outIndex:(int*)index;
-(BOOL)hasActionWithTarget:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering outActions:(id*)actions outIndex:(int*)index;
-(CFArrayRef)indexesOfActionsForProperty:(int)property withActionGrouping:(int)actionGrouping;
-(CFDictionaryRef)inlineActionsByProperty;
-(BOOL)isActionHidden:(id)hidden;
-(id)newActionsForProperty:(int)property;
-(void)removeAction:(id)action;
-(void)removeActionWithTarget:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)setAction:(id)action hidden:(BOOL)hidden;
-(id)topActions;
@end

