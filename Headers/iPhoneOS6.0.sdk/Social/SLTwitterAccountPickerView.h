/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "Social-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SLTwitterAccountPickerView : XXUnknownSuperclass {
@private
	UILabel* _label;
	UIImageView* _checkmark;
}
@property(assign, nonatomic) BOOL selected;
@property(retain, nonatomic) NSString* title;
-(id)init;
-(void).cxx_destruct;
-(CGRect)checkmarkFrame;
-(CGRect)labelFrame;
-(void)layoutSubviews;
// declared property getter: -(BOOL)selected;
// declared property setter: -(void)setSelected:(BOOL)selected;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
@end

