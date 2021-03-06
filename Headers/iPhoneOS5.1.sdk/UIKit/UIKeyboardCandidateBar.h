/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIView.h"

@class UIScrollView, NSArray, UIKeyboardCandidateExtended, UIKeyboardCandidateBarBackgroundView, NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
@private
	id<UIKeyboardCandidateListDelegate> m_delegate;
	UIKeyboardCandidateBarBackgroundView* m_cellsContainerView;
	NSArray* m_candidates;
	NSArray* m_allCandidates;
	NSString* m_inlineText;
	NSMutableArray* m_cells;
	unsigned m_currentCandidateIndex;
	CGRect m_inlineRect;
	float m_maxX;
	BOOL m_largeUIShowing;
	UIKeyboardCandidateExtended* m_extendedCandidatesView;
	UIScrollView* m_scrollView;
	UIView* m_extendedButton;
	UIView* m_shadowView;
	BOOL m_minimized;
	BOOL m_animating;
}
@property(assign, nonatomic, getter=isAnimating) BOOL animating;	// @synthesize=m_animating
@property(retain, nonatomic) UIKeyboardCandidateBarBackgroundView* cellsContainerView;	// @synthesize=m_cellsContainerView
@property(retain, nonatomic) UIKeyboardCandidateExtended* extendedCandidatesView;	// @synthesize=m_extendedCandidatesView
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// @synthesize=m_minimized
+(id)activeInstance;
+(float)candidateBarHeight;
+(id)sharedInstance;
-(id)initWithFrame:(CGRect)frame;
-(id).cxx_construct;
-(BOOL)_addCells:(int)cells;
-(void)_bgAddCells:(id)cells;
-(void)_cellSelected:(id)selected;
-(void)_clearAll;
-(void)_clearCells;
-(void)_forceLayoutTo:(unsigned)to;
-(void)_hideExtendedCandidatesViewWithAnimation:(BOOL)animation;
-(void)_setCurrentCandidateIndex:(unsigned)index;
-(void)_showExtendedCandidatesView;
-(void)candidateAcceptedAtIndex:(unsigned)index;
-(id)candidateAtIndex:(unsigned)index;
-(void)candidateListAcceptCandidate:(id)candidate;
-(void)candidateListSelectionDidChange:(id)candidateListSelection;
-(void)candidateListShouldBeDismissed:(id)candidateList;
// declared property getter: -(id)cellsContainerView;
-(void)configureKeyboard:(id)keyboard;
-(unsigned)count;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)dealloc;
// declared property getter: -(id)extendedCandidatesView;
// declared property getter: -(BOOL)isAnimating;
// declared property getter: -(BOOL)isMinimized;
-(void)layout;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(CGSize)screenSpaceBetweenStatusBarAndKeyboard;
// declared property setter: -(void)setAnimating:(BOOL)animating;
-(void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;
// declared property setter: -(void)setCellsContainerView:(id)view;
// declared property setter: -(void)setExtendedCandidatesView:(id)view;
// declared property setter: -(void)setMinimized:(BOOL)minimized;
-(void)setUIKeyboardCandidateListDelegate:(id)delegate;
-(void)showCandidateAtIndex:(unsigned)index;
-(void)showNextCandidate;
-(void)showNextPage;
-(void)showPageAtIndex:(unsigned)index;
-(void)showPreviousCandidate;
-(void)showPreviousPage;
@end

