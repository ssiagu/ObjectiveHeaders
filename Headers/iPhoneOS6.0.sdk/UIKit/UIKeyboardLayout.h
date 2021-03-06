/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardLayoutProtocol.h"

@class NSMutableArray, UITouch;

@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol> {
	NSMutableArray* _uncommittedTouches;
	UITouch* _activeTouch;
	UITouch* _shiftKeyTouch;
	int _orientation;
@private
	int m_orientation;
}
@property(retain, nonatomic) UITouch* activeTouch;	// @synthesize=_activeTouch
@property(assign) int orientation;	// @synthesize=m_orientation
@property(retain, nonatomic) UITouch* shiftKeyTouch;	// @synthesize=_shiftKeyTouch
-(id)initWithFrame:(CGRect)frame;
-(id)activationIndicatorView;
// declared property getter: -(id)activeTouch;
-(void)addSwipeRecognizer;
-(void)addWipeRecognizer;
-(id)baseKeyForString:(id)string;
-(BOOL)canProduceString:(id)string;
-(id)candidateList;
-(void)changeToKeyplane:(id)keyplane;
-(void)clearAllKeyDelegates;
-(void)clearUnusedObjects:(BOOL)objects;
-(void)commitTouchesBeforeTouch:(id)touch;
-(void)deactivateActiveKeys;
-(void)dealloc;
-(void)didClearInput;
-(BOOL)doesKeyCharging;
-(CGSize)dragGestureSize;
-(float)flickDistance;
-(CGRect)frameForKeylayoutName:(id)keylayoutName;
-(SEL)handlerForNotification:(id)notification;
-(BOOL)hasCandidateKeys;
-(float)hitBuffer;
-(BOOL)ignoresShiftState;
-(BOOL)isShiftKeyBeingHeld;
-(BOOL)isShiftKeyPlaneChooser;
-(id)keyplaneForKey:(id)key;
-(id)keyplaneNamed:(id)named;
-(void)longPressAction;
// declared property getter: -(int)orientation;
-(BOOL)performReturnAction;
-(BOOL)performSpaceAction;
-(void)phraseBoundaryDidChange;
-(void)restoreDefaultsForAllKeys;
-(void)restoreDefaultsForKey:(id)key;
-(void)setAction:(SEL)action forKey:(id)key;
// declared property setter: -(void)setActiveTouch:(id)touch;
-(void)setAutoshift:(BOOL)autoshift;
-(void)setDelegate:(id)delegate forKey:(id)key;
-(void)setLabel:(id)label forKey:(id)key;
-(void)setLongPressAction:(SEL)action forKey:(id)key;
// declared property setter: -(void)setOrientation:(int)orientation;
-(void)setShift:(BOOL)shift;
// declared property setter: -(void)setShiftKeyTouch:(id)touch;
-(void)setTarget:(id)target forKey:(id)key;
// declared property getter: -(id)shiftKeyTouch;
-(BOOL)shouldShowIndicator;
-(void)showKeyboardType:(int)type withAppearance:(int)appearance;
-(id)simulateTouch:(CGPoint)touch;
-(id)simulateTouchForCharacter:(id)character errorVector:(CGPoint)vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;
-(void)swipeGestureRecognized:(id)recognized;
-(void)touchCancelled:(id)cancelled;
-(void)touchDown:(id)down;
-(void)touchDragged:(id)dragged;
-(void)touchUp:(id)up;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(BOOL)updateKeysWithDelegates;
-(void)updateLocalizedKeys:(BOOL)keys;
-(BOOL)usesAutoShift;
-(void)wipeGestureRecognized:(id)recognized;
@end

