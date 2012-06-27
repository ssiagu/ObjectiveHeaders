/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrintInfoRequest : XXUnknownSuperclass {
@private
	PKPrinter* _printer;
	int _requestState;
	id _completionHandler;
}
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(assign, nonatomic) int requestState;	// @synthesize=_requestState
+(id)requestInfoForPrinter:(id)printer;
// declared property getter: -(id)completionHandler;
-(void)dealloc;
-(void)requestPrintInfo;
// declared property getter: -(int)requestState;
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property setter: -(void)setRequestState:(int)state;
@end
