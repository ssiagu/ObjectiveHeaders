/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MessageUI-Structs.h"

@class UIWindow, NSTimer, MFGobblerGestureRecognizer, UIGestureRecognizer, NSMutableDictionary, NSMutableArray, UIView;
@protocol MFDragDestination, MFDraggableItem;

@interface MFDragManager : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
@private
	NSMutableArray* _dragContextValues;
	NSMutableArray* _dragDestinations;
	NSMutableArray* _dragSources;
	NSMutableDictionary* _gestureRecognizersForSource;
	NSMutableDictionary* _sourceForGestureRecognizer;
	id<MFDraggableItem> _draggedItem;
	UIView* _draggedItemView;
	id<MFDragDestination> _currentDestination;
	UIGestureRecognizer* _currentGestureBeingProcessed;
	UIWindow* _dragWindow;
	MFGobblerGestureRecognizer* _gobblerGestureRecognizer;
	NSTimer* _scrollTimer;
	CGPoint _offsetCenterOfDraggedView;
	CGPoint _previousGestureLocation;
	double _timeOfLastBigUpdate;
	CGRect _draggedItemOriginalFrame;
	BOOL _dragWasSuccessful;
	BOOL _scrollingForDrag;
}
+(id)sharedInstance;
-(id)init;
-(void)_cleanUpAfterDragCompleted;
-(BOOL)_gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)failByGestureRecognizer;
-(void)_handleLongPress:(id)press;
-(void)_processGestureUpdate;
-(void)_scrollViewIfNecessary;
-(void)addDragContext:(id)context;
-(void)addDragDestination:(id)destination;
-(void)addDragSource:(id)source;
-(void)cancelCurrentDragOperation;
-(void)dealloc;
-(void)enumerateDragContextsUsingBlock:(id)block;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)removeDragContext:(id)context;
-(void)removeDragDestination:(id)destination;
-(void)removeDragSource:(id)source;
@end
