/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMessagePort : NSPort {
@private
	void* _port;
	id _delegate;
}
+(void)_fixNSMessagePortLeak;
+(BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;
-(id)init;
-(id)initWithName:(id)name;
-(id)initWithRemoteName:(id)remoteName;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)dealloc;
-(id)delegate;
-(void)finalize;
-(void)invalidate;
-(BOOL)isValid;
-(id)name;
-(oneway void)release;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
-(id)retain;
-(unsigned)retainCount;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;
-(BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;
-(BOOL)sendBeforeTime:(double)time streamData:(void*)data components:(id)components from:(id)from msgid:(unsigned)msgid;
-(void)setDelegate:(id)delegate;
-(BOOL)setName:(id)name;
@end
