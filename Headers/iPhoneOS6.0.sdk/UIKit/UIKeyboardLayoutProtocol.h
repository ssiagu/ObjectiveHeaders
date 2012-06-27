/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol UIKeyboardLayoutProtocol <NSObject>
-(id)activationIndicatorView;
-(id)candidateList;
-(void)clearAllKeyDelegates;
-(void)clearUnusedObjects:(BOOL)objects;
-(void)deactivateActiveKeys;
@optional
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)info;
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)info clearingDimming:(BOOL)dimming;
@required
-(void)didClearInput;
-(BOOL)hasCandidateKeys;
-(BOOL)ignoresShiftState;
-(BOOL)isShiftKeyBeingHeld;
-(void)longPressAction;
-(BOOL)performReturnAction;
-(BOOL)performSpaceAction;
-(void)phraseBoundaryDidChange;
-(void)restoreDefaultsForAllKeys;
-(void)restoreDefaultsForKey:(id)key;
-(void)setAction:(SEL)action forKey:(id)key;
-(void)setAutoshift:(BOOL)autoshift;
-(void)setDelegate:(id)delegate forKey:(id)key;
-(void)setLabel:(id)label forKey:(id)key;
-(void)setLongPressAction:(SEL)action forKey:(id)key;
@optional
-(void)setReturnKeyEnabled:(BOOL)enabled withDisplayName:(id)displayName withType:(int)type;
@required
-(void)setShift:(BOOL)shift;
-(void)setTarget:(id)target forKey:(id)key;
-(BOOL)shouldShowIndicator;
-(void)showKeyboardType:(int)type withAppearance:(int)appearance;
-(BOOL)updateKeysWithDelegates;
-(void)updateLocalizedKeys:(BOOL)keys;
-(BOOL)usesAutoShift;
@end
