/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MessageUI-Structs.h"

@class NSString, NSTimer, MFMessageReformattingContext, LibraryMessage, NSMutableDictionary, DOMRange, NSObject;
@protocol MFMessageWebLayerDelegate;

@interface MFMessageWebLayer : XXUnknownSuperclass {
	NSString* _currentUUID;
	NSTimer* _ignorePendingStylesheetsTimer;
	NSObject<MFMessageWebLayerDelegate>* _mwlDelegate;
	int _displayStyle;
	unsigned _shouldReformat : 1;
	unsigned _unitTests : 1;
	unsigned _isFromEntourage : 1;
	BOOL _prePrintDataDetectionPending;
	BOOL _showRemoteImages;
	BOOL _hasUnloadedRemoteImages;
@private
	id _postDisplayOperationBlock;
	id _postDisplayCancellationBlock;
	NSString* _mainFrameURL;
	LibraryMessage* _displayInfoCacheLibraryMessage;
	NSMutableDictionary* _displayInfoCache;
	BOOL _stoppedLoading;
	BOOL _didReformatMessage;
	BOOL _didFinishLoad;
	NSString* _originalHTMLString;
	MFMessageReformattingContext* _reformattingContext;
	DOMRange* _bottomReplyRange;
	unsigned _bottomReplyLastQuoteLevel;
}
@property(assign) unsigned bottomReplyLastQuoteLevel;	// @synthesize=_bottomReplyLastQuoteLevel
@property(retain) DOMRange* bottomReplyRange;	// @synthesize=_bottomReplyRange
@property(assign) BOOL hasUnloadedRemoteImages;	// @synthesize=_hasUnloadedRemoteImages
@property(copy) NSString* originalHTMLString;	// @synthesize=_originalHTMLString
@property(assign) BOOL prePrintDataDetectionPending;	// @synthesize=_prePrintDataDetectionPending
@property(retain) MFMessageReformattingContext* reformattingContext;	// @synthesize=_reformattingContext
@property(assign) BOOL showRemoteImages;	// @synthesize=_showRemoteImages
+(void)beginBlockingRemoteImagesExceptForMessageWebLayer:(id)messageWebLayer;
+(void)clearUnblockedRemoteImagesCache;
+(void)endBlockingRemoteImages;
+(void)initialize;
-(id)initWithFrame:(CGRect)frame visibleSize:(CGSize)size viewportWidth:(float)width displayStyle:(int)style;
-(void)_cancelPendingIgnoreStylesheets;
-(id)_createInlinePluginElementWithHTMLRepresentation:(id)htmlrepresentation inDocument:(id)document;
-(void)_didFinishReformattingMessage;
-(BOOL)_elementHasDefinedWidth:(id)width;
-(void)_frameDidFinishPrePrintURLification:(id)_frame;
-(void)_ignorePendingStylesheets:(id)stylesheets;
-(id)_rangeOfFirstText;
-(id)_reformatOneElementUsingMethod:(id)method shouldCancel:(BOOL*)cancel;
-(void)_reformattingDidFail;
-(void)_replaceElement:(id)element with:(id)with;
-(BOOL)_rescaleTopLevelElements;
-(void)_schedulePendingIgnoreStylesheets;
-(void)_sendDelegateSizeDidChange;
-(BOOL)_shouldContinueResizingMessage;
-(BOOL)_shouldRescaleMessage;
-(BOOL)_shouldResizeMessage;
-(void)_webthread_webView:(id)view didFinishDocumentLoadForFrame:(id)frame;
-(void)_webthread_webView:(id)view didFinishLoadForFrame:(id)frame;
-(void)_webthread_webView:(id)view tileDidDraw:(id)tile;
-(void)_willBeginReformattingMessage;
-(void)addUnblockedRemoteImageURL:(id)url;
-(void)adjustSizeBasedOnMainFrame:(id)frame;
-(void)appendMarkupString:(id)string baseURL:(id)url;
-(id)attachmentDownloadProgressObserversByUniqueIdentifiers;
-(void)attemptEarlyMessageReformat;
-(BOOL)boolForDisplayInfoCacheKey:(id)displayInfoCacheKey;
// declared property getter: -(unsigned)bottomReplyLastQuoteLevel;
// declared property getter: -(id)bottomReplyRange;
-(BOOL)canReformatMessageWithoutSubresources:(id)subresources resultCanBeCached:(BOOL*)cached;
-(void)cancelPostDisplayOperation;
-(void)clearMessageReformattingCache;
-(void)copy:(id)copy;
-(void)dealloc;
-(void)defaultMouseDragged:(GSEventRef)dragged;
-(float)defaultWidth;
-(void)displayDidEnd;
-(int)displayStyle;
-(BOOL)hasPluginWithUninitializedSize;
// declared property getter: -(BOOL)hasUnloadedRemoteImages;
-(void)invalidateDisplayInfoCache;
-(BOOL)isCancelled;
-(void)loadFragments:(id)fragments withDDContext:(id)ddcontext forLibraryMessage:(id)libraryMessage;
-(void)loadHTMLString:(id)string baseURL:(id)url;
-(float)maximumDoubleTapScale;
-(id)messageWebLayerDelegate;
-(id)newQuoteSubparser;
-(id)objectForDisplayInfoCacheKey:(id)displayInfoCacheKey;
// declared property getter: -(id)originalHTMLString;
-(void)parseDocument:(id)document;
// declared property getter: -(BOOL)prePrintDataDetectionPending;
-(void)prepareDisplayInfoCacheWithLibraryMessage:(id)libraryMessage;
-(void)reformatMessage:(id)message;
-(BOOL)reformatMessageOnce;
// declared property getter: -(id)reformattingContext;
-(void)reload;
-(void)saveDisplayInfoCache;
-(void)setBool:(BOOL)aBool forDisplayInfoCacheKey:(id)displayInfoCacheKey;
// declared property setter: -(void)setBottomReplyLastQuoteLevel:(unsigned)level;
// declared property setter: -(void)setBottomReplyRange:(id)range;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setHasUnloadedRemoteImages:(BOOL)images;
-(void)setMessageIsFromEntourage:(BOOL)entourage;
-(void)setMessageWebLayerDelegate:(id)delegate;
-(void)setObject:(id)object forDisplayInfoCacheKey:(id)displayInfoCacheKey;
// declared property setter: -(void)setOriginalHTMLString:(id)string;
-(void)setPostDisplayOperationBlock:(id)block cancellationBlock:(id)block2;
// declared property setter: -(void)setPrePrintDataDetectionPending:(BOOL)pending;
// declared property setter: -(void)setReformattingContext:(id)context;
// declared property setter: -(void)setShowRemoteImages:(BOOL)images;
// declared property getter: -(BOOL)showRemoteImages;
-(void)stopLoading:(id)loading;
-(void)stopLoadingAndClear;
-(void)updateImageURL:(id)url withURL:(id)url2 completionBlock:(id)block;
-(void)updateImageWithSource:(id)source withHTMLRepresentation:(id)htmlrepresentation completionBlock:(id)block;
-(void)updateInlinePluginWithContentID:(id)contentID withHTMLRepresentation:(id)htmlrepresentation completionBlock:(id)block;
-(BOOL)usePadDisplayStyle;
-(id)webThreadWebView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;
-(void)webThreadWebView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;
-(void)webThreadWebView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;
-(id)webThreadWebView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
-(void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;
-(void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;
-(BOOL)webView:(id)view shouldPaintBrokenImageForURL:(id)url;
@end

