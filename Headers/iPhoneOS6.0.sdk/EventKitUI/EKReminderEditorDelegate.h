/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol EKReminderEditorDelegate <NSObject>
@optional
-(void)didEndDatePickingWithTarget:(id)target animated:(BOOL)animated;
-(id)viewForActionSheet;
-(void)viewSizeChangedAnimated:(BOOL)animated;
-(void)willBeginDatePickingWithDate:(id)date target:(id)target action:(SEL)action animated:(BOOL)animated minimumTableHeight:(float)height;
@end

