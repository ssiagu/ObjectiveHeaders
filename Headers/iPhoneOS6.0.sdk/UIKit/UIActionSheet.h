/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSAttributedString, NSMutableArray, UIWindow, UILabel, UIImage, UIPopoverController, NSString, UIToolbar;
@protocol UIActionSheetDelegate;

@interface UIActionSheet : UIView {
@private
	id<UIActionSheetDelegate> _delegate;
	UILabel* _titleLabel;
	NSAttributedString* _attributedTitleString;
	UILabel* _subtitleLabel;
	UILabel* _bodyTextLabel;
	UILabel* _taglineTextLabel;
	float _startY;
	id _context;
	int _cancelButton;
	int _defaultButton;
	int _firstOtherButton;
	UIToolbar* _toolbar;
	UIWindow* _originalWindow;
	UIWindow* _dimWindow;
	int _suspendTag;
	int _dismissButtonIndex;
	float _bodyTextHeight;
	NSMutableArray* _buttons;
	NSMutableArray* _buttonsInTable;
	NSMutableArray* _textFields;
	UIView* _keyboard;
	UIView* _table;
	UIView* _buttonTableView;
	UIView* _dimView;
	UIPopoverController* _popoverController;
	float _fontSizeInTableView;
	float _iconOffset;
	float _labelOffset;
	float _labelWidth;
	float _titleWidth;
	BOOL _oldIgnoreTapsValue;
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned sheetWasShown : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned popupFromPoint : 1;
		unsigned inPopover : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned twoColumnsLayoutMode : 7;
		unsigned threeColumnsLayoutMode : 7;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned useThreePartButtons : 1;
		unsigned useTwoPartButtons : 1;
		unsigned displaySelectedButtonGlyph : 1;
		unsigned indexOfSelectedButton : 7;
		unsigned useCustomSelectedButtonGlyph : 1;
	} _modalViewFlags;
	int _actionSheetStyle;
	UIImage* _selectedButtonGlyphImage;
	UIImage* _selectedButtonGlyphHighlightedImage;
	UIImageView* _shadowImageView;
}
@property(assign, nonatomic) int actionSheetStyle;
@property(assign, nonatomic) int cancelButtonIndex;
@property(assign, nonatomic) id<UIActionSheetDelegate> delegate;
@property(assign, nonatomic) int destructiveButtonIndex;
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;
@property(readonly, assign, nonatomic) int numberOfButtons;
@property(copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
+(Class)_popoverControllerClass;
+(id)_popupAlertBackground;
+(CGSize)minimumSize;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;
-(id)initWithTitle:(id)title delegate:(id)delegate cancelButtonTitle:(id)title3 destructiveButtonTitle:(id)title4 otherButtonTitles:(id)titles;
-(id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;
-(void)_actionSheetHidingAnimationDidStop:(id)_actionSheetHidingAnimation finished:(id)finished;
-(void)_actionSheetRepresentingAnimationDidStop:(id)_actionSheetRepresentingAnimation finished:(id)finished;
-(id)_addButtonWithTitle:(id)title;
-(id)_addButtonWithTitle:(id)title label:(id)label;
-(id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;
-(id)_addMediaButtonWithTitle:(id)title iconView:(id)view andTableIconView:(id)view3;
-(void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;
-(void)_alertSheetTextFieldReturn:(id)aReturn;
-(void)_appSuspended:(id)suspended;
-(id)_attributedTitleString;
-(float)_bottomVerticalInset;
-(void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;
-(void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;
-(id)_buttonAtIndex:(int)index;
-(void)_buttonClicked:(id)clicked;
-(float)_buttonHeight;
-(BOOL)_canShowAlerts;
-(void)_cancelAnimated:(BOOL)animated;
-(void)_cleanupAfterPopupAnimation;
-(void)_createBodyTextLabelIfNeeded;
-(void)_createSubtitleLabelIfNeeded;
-(void)_createTaglineTextLabelIfNeeded;
-(void)_createTitleLabelIfNeeded;
-(int)_currentOrientation;
-(id)_dimView;
-(id)_dimViewWithFrame:(CGRect)frame;
-(BOOL)_dimsBackground;
-(void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;
-(void)_handleKeyEvent:(GSEventRef)event;
-(void)_hideActionSheetInsidePopOverAnimated:(BOOL)animated;
-(void)_hideHostingPopOverViewAnimated:(BOOL)animated;
-(BOOL)_isAnimating;
-(BOOL)_isHostedByPopOver;
-(BOOL)_isInsidePopOverContent;
-(BOOL)_isSBAlert;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_layoutIfNeeded;
-(void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;
-(float)_maxHeight;
-(CGSize)_maxSize;
-(BOOL)_needsKeyboard;
-(void)_performPopoutAnimationAnimated:(BOOL)animated;
-(void)_performPopup:(BOOL)popup;
-(void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;
-(void)_popoverHiddingAnimationDidStop:(id)_popoverHiddingAnimation finished:(id)finished;
-(void)_popoverRepresentationAnimationDidStop:(id)_popoverRepresentationAnimation finished:(id)finished;
-(void)_presentFromBarButtonItem:(id)barButtonItem orFromRect:(CGRect)rect inView:(id)view direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;
-(void)_presentPopoverInCenterOfWindowForView:(id)view;
-(void)_presentSheetFromView:(id)view above:(BOOL)above;
-(void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;
-(void)_presentSheetStartingFromYCoordinate:(double)ycoordinate inView:(id)view;
-(void)_presentViaResponderChain:(id)chain asPopoverFromBarButtonItem:(id)barButtonItem orFromRect:(CGRect)rect inView:(id)view withPreferredArrowDirections:(int)preferredArrowDirections passthroughViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;
-(void)_presentViaResponderChainFromYCoordinate:(float)ycoordinate;
-(id)_presentingViewForView:(id)view;
-(id)_relinquishPopoverController;
-(void)_removeAlertWindowOrShowAnOldAlert;
-(void)_repopup;
-(void)_repopupNoAnimation;
-(void)_representActionSheetInsidePopOverAnimated:(BOOL)animated;
-(void)_representHostingPopOverViewAnimated:(BOOL)animated;
-(void)_rotatingAnimationDidStop:(id)_rotatingAnimation;
-(void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;
-(void)_setAttributedTitleString:(id)string;
-(void)_setFirstOtherButtonIndex:(int)index;
-(void)_setupInitialFrame;
-(void)_setupTitleStyle;
-(BOOL)_shouldOrderInAutomaticKeyboard;
-(void)_slideSheetOut:(BOOL)anOut;
-(void)_temporarilyHideAnimated:(BOOL)animated;
-(float)_titleHorizontalInset;
-(id)_titleLabel;
-(float)_titleVerticalBottomInset;
-(float)_titleVerticalTopInset;
-(void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;
// declared property getter: -(int)actionSheetStyle;
-(int)addButtonWithTitle:(id)title;
-(id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;
-(id)addButtonWithTitle:(id)title label:(id)label;
-(id)addMediaButtonWithTitle:(id)title iconView:(id)view andTableIconView:(id)view3;
-(id)addTextFieldWithValue:(id)value label:(id)label;
-(int)alertSheetStyle;
-(CGSize)backgroundSize;
-(BOOL)becomeFirstResponder;
-(BOOL)blocksInteraction;
-(int)bodyMaxLineCount;
-(id)bodyText;
-(id)buttonAtIndex:(int)index;
-(int)buttonCount;
-(id)buttonTitleAtIndex:(int)index;
-(id)buttons;
-(BOOL)canBecomeFirstResponder;
// declared property getter: -(int)cancelButtonIndex;
-(id)context;
-(void)dealloc;
-(id)defaultButton;
-(int)defaultButtonIndex;
// declared property getter: -(id)delegate;
-(id)destructiveButton;
// declared property getter: -(int)destructiveButtonIndex;
-(BOOL)dimsBackground;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)animated;
-(void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(int)firstOtherButtonIndex;
-(BOOL)isBodyTextTruncated;
// declared property getter: -(BOOL)isVisible;
-(id)keyboard;
-(void)layout;
-(void)layoutAnimated:(BOOL)animated;
-(id)message;
-(CGSize)minimumSize;
// declared property getter: -(int)numberOfButtons;
-(int)numberOfLinesInTitle;
-(int)numberOfRows;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)popupAlertAnimated:(BOOL)animated;
-(void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;
-(void)presentFromBarButtonItem:(id)barButtonItem direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;
-(void)presentFromRect:(CGRect)rect inView:(id)view direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;
-(void)presentSheetFromAboveView:(id)aboveView;
-(void)presentSheetFromBehindView:(id)behindView;
-(void)presentSheetFromButtonBar:(id)buttonBar;
-(void)presentSheetInContentView:(id)contentView;
-(void)presentSheetInPopoverView:(id)popoverView;
-(void)presentSheetInView:(id)view;
-(void)presentSheetToAboveView:(id)aboveView;
-(void)removeFromSuperview;
-(BOOL)requiresPortraitOrientation;
-(BOOL)resignFirstResponder;
-(BOOL)runsModal;
// declared property setter: -(void)setActionSheetStyle:(int)style;
-(void)setAlertSheetStyle:(int)style;
-(void)setBlocksInteraction:(BOOL)interaction;
-(void)setBodyText:(id)text;
-(void)setBodyTextMaxLineCount:(int)count;
// declared property setter: -(void)setCancelButtonIndex:(int)index;
-(void)setContext:(id)context;
-(void)setDefaultButton:(id)button;
-(void)setDefaultButtonIndex:(int)index;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setDestructiveButton:(id)button;
// declared property setter: -(void)setDestructiveButtonIndex:(int)index;
-(void)setDimView:(id)view;
-(void)setDimsBackground:(BOOL)background;
-(void)setInPopover:(BOOL)popover;
-(void)setIndexOfSelectedButton:(int)selectedButton;
-(void)setMessage:(id)message;
-(void)setNumberOfRows:(int)rows;
-(void)setRunsModal:(BOOL)modal;
-(void)setSelectedButtonGlyphHighlightedImage:(id)image;
-(void)setSelectedButtonGlyphImage:(id)image;
-(void)setShowsOverSpringBoardAlerts:(BOOL)alerts;
-(void)setSubtitle:(id)subtitle;
-(void)setSuspendTag:(int)tag;
-(void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;
-(void)setTaglineText:(id)text;
-(void)setThreeColumnsLayoutMode:(int)mode;
// declared property setter: -(void)setTitle:(id)title;
-(void)setTitleMaxLineCount:(int)count;
-(void)setTwoColumnsLayoutMode:(int)mode;
-(void)setUseThreeColumnsButtonsLayout:(BOOL)layout;
-(void)setUseTwoColumnsButtonsLayout:(BOOL)layout;
-(void)showFromBarButtonItem:(id)barButtonItem;
-(void)showFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;
-(void)showFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;
-(void)showFromTabBar:(id)tabBar;
-(void)showFromToolbar:(id)toolbar;
-(void)showInView:(id)view;
-(BOOL)showsOverSpringBoardAlerts;
-(id)subtitle;
-(int)suspendTag;
-(BOOL)tableShouldShowMinimumContent;
-(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)textField;
-(id)textFieldAtIndex:(int)index;
-(int)textFieldCount;
-(int)threeColumnsLayoutMode;
// declared property getter: -(id)title;
-(int)titleMaxLineCount;
-(CGRect)titleRect;
-(int)twoColumnsLayoutMode;
-(BOOL)useThreeColumnsButtonsLayout;
-(BOOL)useTwoColumnsButtonsLayout;
@end

