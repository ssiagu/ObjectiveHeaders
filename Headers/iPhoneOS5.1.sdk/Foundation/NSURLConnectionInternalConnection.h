/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLConnectionInternal.h"
#import "NSURLConnectionInternalConnection.h"
#import "NSURLConnectionRequired.h"

@class NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {
@private
	CFURLConnectionRef _cfConn;
	CFURLAuthChallengeRef _currCFChallenge;
	NSURLAuthenticationChallenge* _currNSChallenge;
	CFStringRef _fileName;
	bool _shouldSkipCancelOnRelease;
	long long _totalBytes;
	long long _expectedTotalBytes;
}
-(id)initWithInfo:(const InternalInit*)info;
-(CFURLConnectionRef)_CFURLConnection;
-(void)_invalidate;
-(void)_resumeLoading;
-(void)_setShouldSkipCancelOnRelease:(bool)_set;
-(void)_suspendLoading;
-(void)cancel;
-(void)cancelAuthenticationChallenge:(id)challenge;
-(void)cleanupChallenges;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;
-(void)dealloc;
-(void)invokeForDelegate:(id)delegate;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(void)start;
-(void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;
-(void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;
@end

@interface NSURLConnectionInternalConnection (Internal)
-(void)sendCFChallenge:(CFURLAuthChallengeRef)challenge toSelector:(SEL)selector;
@end

