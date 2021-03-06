/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"

@class NSPort, NSMutableArray;

@interface NSPortMessage : NSObject {
@private
	NSPort* localPort;
	NSPort* remotePort;
	NSMutableArray* components;
	unsigned msgid;
	void* reserved2;
	void* reserved;
}
-(id)initWithReceivePort:(id)receivePort sendPort:(id)port components:(id)components;
-(id)initWithSendPort:(id)sendPort receivePort:(id)port components:(id)components;
-(id)components;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(unsigned)msgid;
-(id)receivePort;
-(BOOL)sendBeforeDate:(id)date;
-(id)sendPort;
-(void)setMsgid:(unsigned)msgid;
@end

