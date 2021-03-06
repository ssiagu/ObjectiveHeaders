/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardImpl.h"
#import "UIView.h"
#import "UIKeyboardCandidateListDelegate.h"

@class UITextInputTraits, NSMutableArray, NSObject, UIDelayedAction, UIAutocorrectInlinePrompt, UIKeyboardLayout, NSArray, NSTimer, NSMutableDictionary, UITextInputArrowKeyHistory, UIKeyboardCandidate, UIAlertView, UIKeyboardInputManager, NSString;
@protocol UIKeyInput, UITextInput, UIKeyboardRecording, UIApplicationEventRecording, UIKeyboardTypology, UITextInputPrivate, UIKeyboardInput, UIKeyboardImplGeometryDelegate, UIKeyboardCandidateList;

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate> {
	id<UIKeyInput> m_delegate;
	UIView* m_languageIndicator;
	NSString* m_previousInputString;
	UIKeyboardInputManager* m_inputManager;
	UIKeyboardCandidate* m_autocorrection;
	UIAutocorrectInlinePrompt* m_autocorrectPrompt;
	UIDelayedAction* m_autocorrectPromptAction;
	NSMutableDictionary* m_autocorrectHistoryLists;
	NSMutableArray* m_recentUnacceptedAutocorrections;
	NSArray* m_candidates;
	id<UIKeyboardCandidateList> m_candidateList;
	UIView* m_markedTextOverlay;
	id<UIKeyboardImplGeometryDelegate> m_geometryDelegate;
	NSObject<UIKeyboardRecording, UIApplicationEventRecording>* m_recorder;
	UIKeyboardLayout* m_layout;
	NSMutableDictionary* m_keyedLayouts;
	NSString* m_inputModeLastChosen;
	struct {
		NSTimer* timer;
		GSEventRef eventToRepeat;
		BOOL firstRepeat;
	} m_hardwareRepeat;
	NSTimer* m_autoDeleteTimer;
	unsigned m_autoDeleteCount;
	double m_autoDeleteLastDelete;
	double m_autoDeleteInterval;
	unsigned long m_autoDeleteShiftCharacter;
	UIDelayedAction* m_longPressAction;
	int m_orientation;
	int m_originalOrientation;
	CGPoint m_inputPoint;
	int m_changeCount;
	double m_changeTime;
	double m_doubleSpacePeriodTime;
	id m_changedDelegate;
	CFRunLoopObserverRef m_observer;
	unsigned m_textInputChangingCount;
	BOOL m_textInputChangingText;
	BOOL m_textInputChangingDirection;
	BOOL m_textInputChangesIgnored;
	BOOL m_insideKeyInputDelegateCall;
	UITextInputTraits* m_defaultTraits;
	UITextInputTraits* m_traits;
	int m_returnKeyState;
	int m_currentDirection;
	int m_learnsCorrections;
	BOOL m_anotherTouchWaiting;
	BOOL m_autoDeleteOK;
	BOOL m_autocapitalizationPreference;
	BOOL m_autocorrectPromptTimerFired;
	BOOL m_autocorrectionPreference;
	BOOL m_autoshift;
	BOOL m_caretShowingNow;
	BOOL m_changeNotificationDisabled;
	BOOL m_delegateIsSMSTextView;
	BOOL m_delegateRequiresKeyEvents;
	BOOL m_doubleSpacePeriodPreference;
	BOOL m_hardwareKeyboardAttached;
	BOOL m_inDealloc;
	BOOL m_inHardwareKeyboardMode;
	BOOL m_initializationDone;
	BOOL m_performDecomposingDelete;
	BOOL m_performanceLoggingEnabled;
	BOOL m_selecting;
	BOOL m_shift;
	BOOL m_shiftLocked;
	BOOL m_shiftLockedEnabled;
	BOOL m_settingShift;
	BOOL m_shouldSkipCandidateSelection;
	BOOL m_updatingPreferences;
	BOOL m_changingGeometryWithSameOrientation;
	BOOL m_suppressGeometryChangeNotifications;
	BOOL m_acceptingCandidate;
	BOOL m_userChangedSelection;
	BOOL m_shouldChargeKeys;
	BOOL m_longPress;
	BOOL m_syntheticInput;
	BOOL m_replacingWord;
	BOOL m_shiftNeedsUpdate;
	BOOL m_shiftPreventAutoshift;
	BOOL m_shiftHeldDownNeedsUpdated;
	BOOL m_delegateAdoptsTextInput;
	BOOL m_delegateAdoptsTextInputPrivate;
	BOOL m_delegateAdoptsKeyboardInput;
	BOOL m_clientVariantSupportEnabled;
	BOOL m_clientVariantSupportEnabledEver;
	NSMutableArray* m_keyplaneNamesPreviousDelegate;
	NSMutableArray* m_keyplaneNamesCurrentDelegate;
	UITextInputArrowKeyHistory* m_arrowKeyHistory;
	BOOL m_preRotateShift;
	BOOL m_preRotateShiftLocked;
	BOOL m_showInputModeIndicator;
	BOOL m_suppressUpdateCandidateView;
	BOOL m_shouldUpdateCacheOnInputModesChange;
	BOOL m_shouldSetInputModeInNextRun;
	BOOL m_rivenCenterFilled;
	float m_splitProgress;
	NSString* m_currentUsedInputMode;
	NSString* m_lastUsedInputMode;
	BOOL m_needsCandidates;
	BOOL m_shouldSkipCandidateGeneration;
	BOOL m_updateLayoutOnShowKeyboard;
	int _currentAlertReason;
@private
	id<UIKeyboardTypology> typologyRecorder;
	BOOL m_showsCandidateBar;
	BOOL m_showsCandidateInline;
	UIAlertView* keyboardAlertView;
	BOOL committingCandidate;
	BOOL geometryIsChanging;
}
@property(retain, nonatomic) UITextInputArrowKeyHistory* arrowKeyHistory;	// @synthesize=m_arrowKeyHistory
@property(readonly, assign) BOOL centerFilled;
@property(retain, nonatomic) id changedDelegate;	// @synthesize=m_changedDelegate
@property(assign, nonatomic) BOOL committingCandidate;	// @synthesize
@property(retain, nonatomic) NSString* currentUsedInputMode;	// @synthesize=m_currentUsedInputMode
@property(retain, nonatomic) UIResponder<UIKeyInput>* delegate;
@property(readonly, assign, nonatomic) UIResponder* delegateAsResponder;
@property(assign, nonatomic) id<UIKeyboardImplGeometryDelegate> geometryDelegate;	// @synthesize=m_geometryDelegate
@property(assign, nonatomic) BOOL geometryIsChanging;	// @synthesize
@property(assign, nonatomic, getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;
@property(readonly, assign, nonatomic) UIResponder<UITextInput>* inputDelegate;
@property(retain, nonatomic) UIKeyboardInputManager* inputManager;	// @synthesize=m_inputManager
@property(retain, nonatomic) UIAlertView* keyboardAlertView;	// @synthesize
@property(retain, nonatomic) NSString* lastUsedInputMode;	// @synthesize=m_lastUsedInputMode
@property(readonly, assign, nonatomic) id<UIKeyboardInput> legacyInputDelegate;
@property(readonly, assign) unsigned minimumTouchesForTranslation;
@property(readonly, assign, nonatomic) UIResponder<UITextInputPrivate>* privateInputDelegate;
@property(retain, nonatomic) id<UIKeyboardRecording, UIApplicationEventRecording> recorder;
@property(assign) BOOL rivenSplitLock;
@property(assign, nonatomic) BOOL shouldSetInputModeInNextRun;	// @synthesize=m_shouldSetInputModeInNextRun
@property(readonly, assign, nonatomic) BOOL shouldShowCandidateBar;
@property(assign, nonatomic) BOOL shouldSkipCandidateSelection;
@property(assign, nonatomic) BOOL showInputModeIndicator;	// @synthesize=m_showInputModeIndicator
@property(assign, nonatomic) BOOL showsCandidateBar;	// @synthesize=m_showsCandidateBar
@property(assign, nonatomic) BOOL showsCandidateInline;	// @synthesize=m_showsCandidateInline
@property(readonly, assign, nonatomic) BOOL splitTransitionInProgress;
@property(retain, nonatomic) id<UIKeyboardTypology> typologyRecorder;	// @synthesize
+(id)activeInstance;
+(float)additionalInstanceHeight;
+(void)applicationDidReceiveMemoryWarning:(id)application;
+(void)applicationWillResignActive:(id)application;
+(void)applicationWillSuspend:(id)application;
+(CGSize)defaultSize;
+(CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;
+(CGSize)defaultSizeForOrientation:(int)orientation;
+(void)handleSpecificHardwareKeyboard:(id)keyboard;
+(void)hardwareKeyboardAvailabilityChanged;
+(BOOL)isSplit;
+(CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;
+(id)normalizedInputModesFromPreference;
+(int)orientationForSize:(CGSize)size;
+(int)persistentDictationTargetZone;
+(CGPoint)persistentDictationWindowOffset;
+(CGPoint)persistentOffset;
+(float)persistentSplitProgress;
+(void)refreshRivenStateWithTraits:(id)traits;
+(void)releaseSharedInstance;
+(BOOL)rivenInstalled;
+(BOOL)rivenPreference;
+(BOOL)rivenTranslationPreference;
+(void)setPersistentDictationTargetZone:(int)zone;
+(void)setPersistentDictationWindowOffset:(CGPoint)offset;
+(void)setPersistentOffset:(CGPoint)offset;
+(void)setPersistentSplitProgress:(float)progress;
+(id)sharedInstance;
+(CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;
+(CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation textInputTraits:(id)traits;
+(float)splitProgress;
+(BOOL)supportsSplit;
+(void)suppressSetPersistentOffset:(BOOL)offset;
-(id)initWithFrame:(CGRect)frame;
-(id)UILanguagePreference;
-(CGRect)_autocorrectPromptRect;
-(void)_handleWebKeyEvent:(GSEventRef)event withEventType:(int)eventType withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;
-(void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString;
-(void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;
-(id)_rangeForAutocorrection;
-(BOOL)_shouldShowCandidateBar:(BOOL)bar;
-(void)_updateSoundPreheatingForWindow:(id)window;
-(void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;
-(void)acceptAutocorrection;
-(void)acceptCandidate:(id)candidate atIndex:(unsigned)index;
-(void)acceptCurrentCandidate;
-(void)acceptCurrentCandidateIfSelected;
-(BOOL)acceptInputString:(id)string;
-(BOOL)acceptWord:(id)word firstDelete:(unsigned)aDelete;
-(id)accessibilityLabelForCandidate:(id)candidate;
-(void)addAutocorrectionRecord:(id)record forTyping:(id)typing;
-(void)addInputObject:(id)object;
-(void)addInputString:(id)string;
-(void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;
-(void)addTyping:(id)typing forAutocorrection:(id)autocorrection;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)animateAutocorrection;
-(void)applicationResumedEventsOnly:(id)only;
-(void)applicationSuspendedEventsOnly:(id)only;
// declared property getter: -(id)arrowKeyHistory;
-(void)autoDeleteTimerFired:(id)fired;
-(BOOL)autocapitalizationPreference;
-(id)autocorrectHistoryForInputMode:(id)inputMode;
-(id)autocorrectPrompt;
-(BOOL)autocorrectSpellingEnabled;
-(void)autocorrectionAnimationDidStop:(id)autocorrectionAnimation finished:(id)finished context:(void*)context;
-(BOOL)autocorrectionPreference;
-(BOOL)autocorrectionPreferenceForTraits;
-(id)autocorrectionRecordForWord:(id)word;
-(BOOL)automaticMinimizationEnabled;
-(void)callChanged;
-(void)callChangedSelection;
-(BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)call characterCountForRapidDelete:(int)rapidDelete;
-(BOOL)callShouldInsertText:(id)call;
-(BOOL)canHandleKeyHitTest;
-(BOOL)canUseGeometryKeyTouch;
-(void)cancelAllKeyEvents;
-(void)cancelSplitTransition;
-(id)candidateList;
-(void)candidateListAcceptCandidate:(id)candidate;
-(void)candidateListSelectionDidChange:(id)candidateListSelection;
-(BOOL)caretBlinks;
-(BOOL)caretVisible;
// declared property getter: -(BOOL)centerFilled;
-(int)changeCount;
-(BOOL)changeNotificationDisabled;
// declared property getter: -(id)changedDelegate;
-(CFDictionaryRef)chargedKeyProbabilities;
-(BOOL)checkSpellingPreference;
-(BOOL)checkSpellingPreferenceForTraits;
-(void)clearAnimations;
-(void)clearAutocorrectPromptTimer;
-(void)clearChangeTimeAndCount;
-(void)clearDelegate;
-(void)clearInput;
-(void)clearKeyAreas;
-(void)clearLanguageIndicator;
-(void)clearLayouts;
-(void)clearLongPressTimer;
-(void)clearSelection;
-(void)clearShiftState;
-(void)clearTimers;
-(void)clearTransientState;
-(id)clientOverrideForKey:(id)key;
-(id)clientVariantDelegate;
-(id)clientVariantsForKey:(id)key;
// declared property getter: -(BOOL)committingCandidate;
-(CGRect)convertRectToAutocorrectRect:(CGRect)autocorrectRect delegateView:(id)view container:(id)container;
-(id)currentInputContextFromInputDelegateWithWordRange:(id)wordRange;
-(BOOL)currentKeyboardTraitsAllowCandidateBar;
-(float)currentLandscapeHeight;
-(float)currentLandscapeWidth;
-(float)currentPortraitHeight;
-(float)currentPortraitWidth;
// declared property getter: -(id)currentUsedInputMode;
-(void)dealloc;
-(void)defaultsDidChange;
-(void)delayedInit;
// declared property getter: -(id)delegate;
// declared property getter: -(id)delegateAsResponder;
-(BOOL)delegateIsSMSTextView;
-(BOOL)delegateSuggestionsForCurrentInput;
-(BOOL)delegateSupportsCorrectionUI;
-(void)deleteBackward;
-(void)deleteBackwardAndNotify:(BOOL)notify;
-(void)deleteForwardAndNotify:(BOOL)notify;
-(void)deleteFromInput;
-(void)detach;
-(void)dismissKeyboard;
-(BOOL)displaysCandidates;
-(BOOL)doubleSpacePeriodPreference;
-(void)enable;
-(void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished;
-(void)fadeAutocorrectPrompt;
-(void)firstHardwareAutoRepeat:(id)repeat;
-(BOOL)flushKeyplaneName:(id)name;
-(void)forceShiftUpdate;
-(void)forceShiftUpdateIfKeyboardStateChanged;
-(CGRect)frameForKeylayoutName:(id)keylayoutName;
-(id)generateAutocorrectionReplacements:(id)replacements;
-(void)generateCandidates;
-(void)generateCandidatesWithOptions:(int)options;
-(void)geometryChangeDone:(BOOL)done;
// declared property getter: -(id)geometryDelegate;
// declared property getter: -(BOOL)geometryIsChanging;
-(id)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method;
-(void)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method completion:(id)completion;
-(void)handleDelete;
-(void)handleDeleteAsRepeat:(BOOL)repeat;
-(void)handleDeleteWithNonZeroInputCount;
-(void)handleDeleteWithZeroInputCount;
-(BOOL)handleKeyCommand:(GSEventRef)command repeatOkay:(BOOL*)okay;
-(void)handleKeyEvent:(GSEventRef)event;
-(void)handleObserverCallback;
-(void)handleSpecificHardwareKeyboard:(id)keyboard;
-(void)handleStringInput:(id)input fromVariantKey:(BOOL)variantKey;
-(void)hardwareAutoRepeat:(id)repeat;
-(void)hardwareKeyboardAvailabilityChanged;
-(id)hardwareKeyboardsSeenPreference;
-(BOOL)hasEditableMarkedText;
-(BOOL)hasMarkedText;
-(BOOL)hideAccessoryViewsDuringSplit;
-(void)hideKeyboard;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
// declared property getter: -(id)inputDelegate;
// declared property getter: -(id)inputManager;
-(id)inputModeFirstPreference;
-(id)inputModeLastChosen;
-(id)inputModeLastChosenPreference;
-(id)inputModeLastUsedForLanguage:(id)language;
-(id)inputModeLastUsedPreference;
-(id)inputModePreference;
-(id)inputOverlayContainer;
-(void)insertText:(id)text;
-(BOOL)isAllowedInputMode:(id)mode;
-(BOOL)isAutoFillMode;
-(BOOL)isAutoShifted;
-(BOOL)isClientVariantSupportEnabled;
-(BOOL)isDesiredInputMode:(id)mode;
// declared property getter: -(BOOL)isInHardwareKeyboardMode;
-(BOOL)isLongPress;
-(BOOL)isMinimized;
-(BOOL)isShiftLocked;
-(BOOL)isShifted;
-(BOOL)isUsingDictationLayout;
-(BOOL)isValidKeyInput:(id)input;
-(void)keyActivated;
-(void)keyDeactivated;
-(int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;
-(BOOL)keySlidIntoSwipe;
// declared property getter: -(id)keyboardAlertView;
-(BOOL)keyboardsExpandedPreference;
-(id)keyplaneNameInCurrentDelegateListForIndex:(int)index;
// declared property getter: -(id)lastUsedInputMode;
-(void)layoutHasChanged;
// declared property getter: -(id)legacyInputDelegate;
-(void)longPressAction;
-(id)markedTextOverlay;
-(unsigned)maximumNumberOfColumnsForSortingMethod:(id)sortingMethod interfaceOrientation:(int)orientation isInline:(BOOL)anInline reducedWidth:(BOOL)width;
-(void)mediaKeyDown:(GSEventRef)down;
// declared property getter: -(unsigned)minimumTouchesForTranslation;
-(void)movePhraseBoundaryToDirection:(int)direction;
-(BOOL)needsToDeferUpdateTextCandidateView;
-(BOOL)noContent;
-(void)notifyShiftState;
-(int)orientation;
-(void)performClientVariantActionNamed:(id)named;
-(BOOL)performanceLoggingPreference;
-(unsigned)phraseBoundary;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)postEmptyDelegateNotificationIfNeeded;
-(void)prepareForGeometryChange;
-(void)prepareForSelectionChange;
-(void)prepareLayoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)prepareUsedKeyplaneNameListForNewDelegate;
// declared property getter: -(id)privateInputDelegate;
-(void)recomputeActiveInputModes;
-(void)recomputeActiveInputModesFromList:(id)list;
// declared property getter: -(id)recorder;
-(void)refreshRivenPreferences;
-(void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;
-(void)releaseKeyplaneNameFromPreviousDelegateList:(id)previousDelegateList;
-(void)releaseSuppressUpdateCandidateView;
-(void)removeAutocorrectPrompt;
-(void)removeAutocorrection;
-(void)removeFromSuperview;
-(void)replaceText:(id)text;
-(void)resizeCandidateBarWithDelta:(float)delta;
-(void)resizeForKeyplaneSize:(CGSize)keyplaneSize;
-(void)retainKeyplaneNameInCurrentDelegateList:(id)currentDelegateList;
-(id)returnKeyDisplayName;
-(BOOL)returnKeyEnabled;
-(int)returnKeyType;
// declared property getter: -(BOOL)rivenSplitLock;
-(void)saveInputModesPreference:(id)preference;
-(void)scheduleReplacementsWithOptions:(unsigned)options;
-(id)searchStringForMarkedText;
-(void)selectionDidChange:(id)selection;
-(void)selectionWillChange:(id)selection;
-(void)setAnotherTouchWaiting:(BOOL)waiting;
// declared property setter: -(void)setArrowKeyHistory:(id)history;
-(void)setAutocorrectSpellingEnabled:(BOOL)enabled;
-(void)setAutocorrection:(id)autocorrection;
-(void)setAutomaticMinimizationEnabled:(BOOL)enabled;
-(void)setCandidates:(id)candidates;
-(void)setCaretBlinks:(BOOL)blinks;
-(void)setCaretVisible:(BOOL)visible;
-(void)setChangeNotificationDisabled:(BOOL)disabled;
-(void)setChanged;
// declared property setter: -(void)setChangedDelegate:(id)delegate;
// declared property setter: -(void)setCommittingCandidate:(BOOL)candidate;
// declared property setter: -(void)setCurrentUsedInputMode:(id)mode;
-(void)setDefaultTextInputTraits:(id)traits;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setDelegate:(id)delegate force:(BOOL)force;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setGeometryDelegate:(id)delegate;
// declared property setter: -(void)setGeometryIsChanging:(BOOL)changing;
-(void)setHardwareKeyboardsSeenPreference:(id)preference;
// declared property setter: -(void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;
// declared property setter: -(void)setInputManager:(id)manager;
-(void)setInputMode:(id)mode;
-(void)setInputMode:(id)mode userInitiated:(BOOL)initiated;
-(void)setInputModeFromPreferences;
-(void)setInputModeLastChosenPreference;
-(void)setInputModeToNextASCIICapableInPreferredList;
-(void)setInputModeToNextInPreferredList;
-(void)setInputObject:(id)object;
-(void)setInputPoint:(CGPoint)point;
// declared property setter: -(void)setKeyboardAlertView:(id)view;
-(void)setLastUsedInputMode;
// declared property setter: -(void)setLastUsedInputMode:(id)mode;
-(void)setLearnsCorrections:(int)corrections;
-(void)setMarkedText;
-(void)setOrientationForSize:(CGSize)size;
-(void)setPhraseBoundary:(unsigned)boundary;
-(void)setPreviousInputString:(id)string;
// declared property setter: -(void)setRecorder:(id)recorder;
-(void)setReturnKeyEnabled:(BOOL)enabled;
// declared property setter: -(void)setRivenSplitLock:(BOOL)lock;
-(void)setSelectionWithPoint:(CGPoint)point;
-(void)setShift:(BOOL)shift;
-(void)setShift:(BOOL)shift autoshift:(BOOL)autoshift;
-(void)setShiftLocked:(BOOL)locked;
-(void)setShiftLockedForced:(BOOL)forced;
-(void)setShiftNeedsUpdate;
-(void)setShiftOffIfNeeded;
-(void)setShiftPreventAutoshift:(BOOL)autoshift;
-(void)setShouldChargeKeys:(BOOL)chargeKeys;
// declared property setter: -(void)setShouldSetInputModeInNextRun:(BOOL)setInputModeInNextRun;
// declared property setter: -(void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;
-(void)setShouldUpdateCacheOnInputModesChange:(BOOL)updateCacheOnInputModesChange;
// declared property setter: -(void)setShowInputModeIndicator:(BOOL)indicator;
// declared property setter: -(void)setShowsCandidateBar:(BOOL)bar;
// declared property setter: -(void)setShowsCandidateInline:(BOOL)anInline;
-(void)setSplitProgress:(float)progress;
// declared property setter: -(void)setTypologyRecorder:(id)recorder;
-(void)setUsesCandidateSelection:(BOOL)selection;
-(unsigned)shiftFlagsForInputString;
-(BOOL)shiftLockPreference;
-(BOOL)shiftLockedEnabled;
-(BOOL)shouldChargeKeys;
-(BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)deletedCharacter;
// declared property getter: -(BOOL)shouldSetInputModeInNextRun;
// declared property getter: -(BOOL)shouldShowCandidateBar;
// declared property getter: -(BOOL)shouldSkipCandidateSelection;
-(BOOL)shouldSkipCandidateSelectionForPopupVariantString:(id)popupVariantString;
-(BOOL)shouldSwitchInputMode:(id)mode;
-(void)showInformationalAlertIfNeededForReason:(int)reason;
// declared property getter: -(BOOL)showInputModeIndicator;
-(void)showInternationalKeyInfoAlertIfNeeded;
-(void)showKeyboard;
-(void)showNextCandidates;
// declared property getter: -(BOOL)showsCandidateBar;
// declared property getter: -(BOOL)showsCandidateInline;
-(id)sortingMethods;
// declared property getter: -(BOOL)splitTransitionInProgress;
-(void)startAutoDeleteTimer;
-(void)startCaretBlinkIfNeeded;
-(void)stopAutoDelete;
-(void)storeDelegateConformance;
-(CGRect)subtractKeyboardFrameFromRect:(CGRect)rect inView:(id)view;
-(BOOL)suppliesCompletions;
-(BOOL)supportsNumberKeySelection;
-(BOOL)swipeToTabPreference;
-(void)takeTextInputTraitsFromDelegate;
-(void)textChanged:(id)changed;
-(void)textDidChange:(id)text;
-(void)textFrameChanged:(id)changed;
-(id)textInputTraits;
-(void)textWillChange:(id)text;
-(id)titleForSortingMethod:(id)sortingMethod;
-(void)toggleShift;
-(void)touchAutoDeleteTimerWithThreshold:(double)threshold;
-(void)touchAutocorrectPromptTimer;
-(void)touchLongPressTimer;
-(void)touchLongPressTimerWithDelay:(double)delay;
// declared property getter: -(id)typologyRecorder;
-(void)updateAutocorrectPrompt:(id)prompt;
-(void)updateAutocorrectPromptAction;
-(void)updateAutocorrectPromptDisplay:(CGRect)display;
-(void)updateCandidateDisplay;
-(void)updateCandidateDisplayAsyncWithCandidates:(id)candidates forInputManager:(id)inputManager;
-(void)updateChangeTimeAndIncrementCount;
-(void)updateForChangedSelection;
-(void)updateInputContextForDeletedText:(id)deletedText toWordRange:(id)wordRange;
-(void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only;
-(void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only preserveIfPossible:(BOOL)possible;
-(void)updateKeyboardEventsLagging:(GSEventRef)lagging;
-(void)updateKeysWithDelegates;
-(void)updateLayout;
-(void)updateLayoutAndSetShift;
-(void)updateLayoutIfNeeded;
-(void)updateLayoutToCurrentInterfaceOrientation;
-(void)updateObserverState;
-(void)updateReturnKey;
-(void)updateReturnKey:(BOOL)key;
-(void)updateShiftState;
-(void)updateTextCandidateView;
@end

@interface UIKeyboardImpl (UIKeyboardLayoutLanguageAdapter)
-(BOOL)callLayoutIgnoresShiftState;
-(BOOL)callLayoutIsShiftKeyBeingHeld;
-(BOOL)callLayoutIsShiftKeyPlaneChooser;
-(void)callLayoutLongPressAction;
-(void)callLayoutSetAutoshift:(BOOL)autoshift;
-(void)callLayoutSetShift:(BOOL)shift;
-(BOOL)callLayoutShiftKeyRequiresImmediateUpdate;
-(void)callLayoutUpdateAllLocalizedKeys;
-(void)callLayoutUpdateLocalizedKeys;
-(void)callLayoutUpdateReturnKey;
-(BOOL)callLayoutUsesAutoShift;
@end

@interface UIKeyboardImpl (UIKeyboardPerformance)
+(void)markElapsed:(id)elapsed;
+(void)markPerformance:(id)performance;
+(void)setParentTestForProfiling:(id)profiling;
-(void)timeElapsed:(unsigned)elapsed message:(id)message;
-(void)timeMark:(unsigned)mark;
-(void)timeMark:(unsigned)mark message:(id)message;
@end

@interface UIKeyboardImpl (UIKeyboardUnitTestSupport)
@property(retain, nonatomic) id changedDelegate;	// @dynamic
+(void)_clearHardwareKeyboardMinimizationPreference;
-(BOOL)_isShowingCandidateUIWithAvailableCandidates;
-(id)_layout;
-(void)_setInputManager:(id)manager;
-(void)_setShiftLockedEnabled:(BOOL)enabled;
-(BOOL)hasAutoRepeat;
-(BOOL)isAutoDeleteActive;
-(void)testAutocorrectionPromptWithCorrection:(id)correction;
-(int)textInputChangingCount;
-(void)updateFromTextInputTraits;
@end

@interface UIKeyboardImpl (TypologySupport)
-(void)installTypology;
-(void)launchTypologyApplication;
-(BOOL)typologyEnabled;
@end

@interface UIKeyboardImpl (UIKitInternal)
-(BOOL)_shouldMinimizeForHardwareKeyboard;
-(void)clearEmojiLayout;
-(void)finishSplitTransitionWithProgress:(float)progress;
-(BOOL)keyboardDrawsOpaque;
-(id)selectionView;
-(void)setInitialDirection;
-(void)setLongPress:(BOOL)press;
-(void)setSplit:(BOOL)split animated:(BOOL)animated;
@end

@interface UIKeyboardImpl (TestingSupport)
-(id)_getAutocorrection;
-(id)_getCurrentKeyboardName;
-(id)_getCurrentKeyplaneName;
-(id)_getLocalizedInputMode;
-(BOOL)_hasCandidates;
-(BOOL)_needsCandidates;
-(int)_positionInCandidateList:(id)candidateList;
-(void)_releaseInputManager;
-(void)_resetInputLocation;
-(void)_setAutocorrects:(BOOL)autocorrects;
-(void)_setNeedsCandidates:(BOOL)candidates;
@end

@interface UIKeyboardImpl (UIKeyboardImplCandidateSupport)
-(unsigned)_inputCountForAutocorrectionCandidate;
-(id)_inputForAutocorrectionCandidate;
@end

@interface UIKeyboardImpl (ShortcutConversionSupport)
-(id)_shortcutConversionCandidateForInput:(id)input;
@end

@interface UIKeyboardImpl (UIKeyboardRecording)
-(void)installRecorder;
-(BOOL)keyboardRecordingEnabled;
-(void)startKeyboardRecording;
-(void)stopKeyboardRecording;
@end

