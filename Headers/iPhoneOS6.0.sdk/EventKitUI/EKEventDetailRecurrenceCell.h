/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEventDetailCell.h"

@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {
	UILabel* _recurrenceLabel;
}
-(id)_myTableView;
-(id)_recurrenceLabel;
-(void)dealloc;
-(float)height;
-(void)layoutForWidth:(float)width position:(int)position;
-(void)setRecurrenceString:(id)string;
@end

