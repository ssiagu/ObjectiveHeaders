/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEventDetailCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface EKEventDetailAlarmCell : EKEventDetailCell {
@private
	int _style;
	UILabel* _alertTitleView;
	UILabel* _alertView;
	UILabel* _alert2View;
	unsigned _visibleItems;
}
-(id)initWithEvent:(id)event editable:(BOOL)editable platformStyle:(int)style;
-(id)_alert2View;
-(id)_alertTitleView;
-(id)_alertView;
-(void)dealloc;
-(BOOL)isEditable;
-(void)layoutForWidth:(float)width position:(int)position;
-(void)setAlarms:(id)alarms;
-(BOOL)update;
@end

