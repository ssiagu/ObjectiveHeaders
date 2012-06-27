/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "PassKit-Structs.h"
#import "WLCardFaceDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, WLCardColorProfile, PKPass, UIImage, WLCardFaceView, WLCardFrontFaceView, WLCardBackFaceView;
@protocol WLCardViewDelegate;

@interface WLCardView : XXUnknownSuperclass <WLCardFaceDelegate> {
@private
	WLCardFrontFaceView* _frontFace;
	WLCardBackFaceView* _backFace;
	WLCardFaceView* _visibleFace;
	WLCardFaceView* _otherFace;
	WLCardColorProfile* _colorProfile;
	UIImage* _cardFrontSnapshot;
	id<WLCardViewDelegate> _delegate;
	PKPass* _card;
	int _contentMode;
	int _backgroundMode;
	BOOL _backFaceIsTall;
	int _suppressedContent;
}
@property(assign, nonatomic) BOOL backFaceIsTall;	// @synthesize=_backFaceIsTall
@property(assign, nonatomic) int backgroundMode;	// @synthesize=_backgroundMode
@property(readonly, assign, nonatomic) PKPass* card;	// @synthesize=_card
@property(retain, nonatomic) UIImage* cardFrontSnapshot;	// @synthesize=_cardFrontSnapshot
@property(assign, nonatomic) int contentMode;	// @synthesize=_contentMode
@property(assign, nonatomic) id<WLCardViewDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL showingFront;
@property(assign, nonatomic) int suppressedContent;	// @synthesize=_suppressedContent
@property(readonly, assign, nonatomic) NSString* uniqueID;
-(id)initWithCard:(id)card;
-(id)initWithCard:(id)card background:(int)background content:(int)content;
-(void)_applyBackgroundMode;
-(void)_applyContentMode;
-(void)_flipCard:(BOOL)card;
-(int)_regionsForCurrentModes;
-(void)_updateBackFaceSuppressedContent;
-(BOOL)_visibleFaceShouldClipForCurrentViewMode:(float*)_visibleFace;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
// declared property getter: -(BOOL)backFaceIsTall;
// declared property getter: -(int)backgroundMode;
// declared property getter: -(id)card;
-(void)cardFaceDeleteButtonPressed:(id)pressed;
-(void)cardFaceFlipButtonPressed:(id)pressed;
// declared property getter: -(id)cardFrontSnapshot;
// declared property getter: -(int)contentMode;
-(void)createBackFaceIfNecessary;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)flipCard:(BOOL)card;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(id)item;
-(void)layoutSubviews;
-(void)presentDiff:(id)diff completion:(id)completion;
// declared property setter: -(void)setBackFaceIsTall:(BOOL)tall;
// declared property setter: -(void)setBackgroundMode:(int)mode;
-(void)setBackgroundMode:(int)mode withDuration:(double)duration;
// declared property setter: -(void)setCardFrontSnapshot:(id)snapshot;
// declared property setter: -(void)setContentMode:(int)mode;
-(void)setContentMode:(int)mode withDuration:(double)duration;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setDimmer:(float)dimmer animated:(BOOL)animated;
// declared property setter: -(void)setSuppressedContent:(int)content;
// declared property getter: -(BOOL)showingFront;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(int)suppressedContent;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
// declared property getter: -(id)uniqueID;
@end
