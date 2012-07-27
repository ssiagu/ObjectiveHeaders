/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIView.h"

@class UIKeyboardCandidateScrollViewController, NSArray, UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateInlinePadBottomShadowView, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
@private
	NSArray* _candidates;
	NSString* _inlineText;
	CGRect _inlineRect;
	float _maxX;
	BOOL _expanded;
	UIKeyboardCandidateScrollViewController* _scrollViewController;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	UIKeyboardCandidateInlinePadBottomShadowView* _shadowView;
	UIKeyboardCandidateSortSelectionBar* _sortSelectionBar;
	int _position;
	BOOL _reducedWidth;
	CGRect _previousCollapsedFrame;
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray* candidates;	// @synthesize=_candidates
@property(readonly, assign, nonatomic) CGSize collapsedSize;
@property(assign, nonatomic) BOOL expanded;	// @synthesize=_expanded
@property(readonly, assign, nonatomic) CGSize expandedSize;
@property(assign, nonatomic) CGRect inlineRect;	// @synthesize=_inlineRect
@property(copy, nonatomic) NSString* inlineText;	// @synthesize=_inlineText
@property(assign, nonatomic) float maxX;	// @synthesize=_maxX
@property(assign, nonatomic) int position;	// @synthesize=_position
@property(assign, nonatomic) CGRect previousCollapsedFrame;	// @synthesize=_previousCollapsedFrame
@property(assign, nonatomic) BOOL reducedWidth;	// @synthesize=_reducedWidth
@property(readonly, assign, nonatomic) UIKeyboardCandidateScrollViewController* scrollViewController;	// @synthesize=_scrollViewController
@property(retain, nonatomic) UIKeyboardCandidateInlinePadBottomShadowView* shadowView;	// @synthesize=_shadowView
@property(readonly, assign, nonatomic) UIKeyboardCandidateSortSelectionBar* sortSelectionBar;	// @synthesize=_sortSelectionBar
-(id)initWithFrame:(CGRect)frame;
-(void)adjustFrameForInlineText:(id)inlineText inlineRect:(CGRect)rect maxX:(float)x;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(float)height;
-(CGRect)adjustedInlineRectFromInlineText:(id)inlineText inlineRect:(CGRect)rect;
-(void)candidateAcceptedAtIndex:(unsigned)index;
-(id)candidateAtIndex:(unsigned)index;
-(void)candidateListAcceptCandidate:(id)candidate;
// declared property getter: -(id)candidateListDelegate;
-(void)candidateListSelectionDidChange:(id)candidateListSelection;
-(void)candidateListShouldBeDismissed:(id)candidateList;
// declared property getter: -(id)candidates;
-(void)collapse;
// declared property getter: -(CGSize)collapsedSize;
-(void)configureKeyboard:(id)keyboard;
-(unsigned)count;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)dealloc;
-(void)expand;
// declared property getter: -(BOOL)expanded;
// declared property getter: -(CGSize)expandedSize;
-(BOOL)handleNumberKey:(unsigned)key;
-(BOOL)handleTabKeyWithShift:(BOOL)shift;
// declared property getter: -(CGRect)inlineRect;
// declared property getter: -(id)inlineText;
-(BOOL)isAcceptableFrame:(CGRect)frame afterScrollBy:(float)by;
-(void)layout;
-(void)layoutShadow;
// declared property getter: -(float)maxX;
-(void)padInlineFloatingViewExpand:(id)expand;
-(BOOL)padInlineFloatingViewIsExpanded:(id)expanded;
// declared property getter: -(int)position;
// declared property getter: -(CGRect)previousCollapsedFrame;
// declared property getter: -(BOOL)reducedWidth;
// declared property getter: -(id)scrollViewController;
// declared property setter: -(void)setCandidateListDelegate:(id)delegate;
// declared property setter: -(void)setCandidates:(id)candidates;
-(void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;
-(void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;
// declared property setter: -(void)setExpanded:(BOOL)expanded;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setInlineRect:(CGRect)rect;
// declared property setter: -(void)setInlineText:(id)text;
// declared property setter: -(void)setMaxX:(float)x;
// declared property setter: -(void)setPosition:(int)position;
// declared property setter: -(void)setPreviousCollapsedFrame:(CGRect)frame;
// declared property setter: -(void)setReducedWidth:(BOOL)width;
// declared property setter: -(void)setShadowView:(id)view;
-(void)setUIKeyboardCandidateListDelegate:(id)delegate;
// declared property getter: -(id)shadowView;
-(void)showCandidateAtIndex:(unsigned)index;
-(void)showNextCandidate;
-(void)showNextPage;
-(void)showPageAtIndex:(unsigned)index;
-(void)showPreviousCandidate;
-(void)showPreviousPage;
// declared property getter: -(id)sortSelectionBar;
-(void)sortSelectionBarAction;
@end
