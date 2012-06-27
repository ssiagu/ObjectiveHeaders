/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivityItemSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UIActivityItemProvider : XXUnknownSuperclass <UIActivityItemSource> {
@private
	id _providedItem;
	NSString* _activityType;
	id _placeholderItem;
}
@property(readonly, assign, nonatomic) NSString* activityType;	// @synthesize=_activityType
@property(retain, nonatomic) id placeholderItem;	// @synthesize=_placeholderItem
@property(retain, nonatomic) id providedItem;	// @synthesize=_providedItem
-(id)initWithPlaceholderItem:(id)placeholderItem;
-(void)_setActivityType:(id)type;
// declared property getter: -(id)activityType;
-(id)activityViewController:(id)controller itemForActivityType:(id)activityType;
-(id)activityViewControllerPlaceholderItem:(id)item;
-(void)dealloc;
-(id)item;
-(void)main;
// declared property getter: -(id)placeholderItem;
// declared property getter: -(id)providedItem;
// declared property setter: -(void)setPlaceholderItem:(id)item;
// declared property setter: -(void)setProvidedItem:(id)item;
@end
