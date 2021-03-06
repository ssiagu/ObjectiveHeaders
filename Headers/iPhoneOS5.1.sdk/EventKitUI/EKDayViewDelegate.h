/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol EKDayViewDelegate <NSObject>
@optional
-(void)dayView:(id)view didCreateOccurrenceViews:(id)views;
-(void)dayView:(id)view didPressOnEvent:(id)event;
-(void)dayView:(id)view didSelectEvent:(id)event;
-(void)dayView:(id)view dragExitedEvent:(id)event;
-(void)dayView:(id)view firstVisibleSecondChanged:(unsigned)changed;
-(void)dayViewDidFinishScrollingToOccurrence:(id)dayView;
-(void)dayViewDidTapEmptySpace:(id)dayView;
@end

