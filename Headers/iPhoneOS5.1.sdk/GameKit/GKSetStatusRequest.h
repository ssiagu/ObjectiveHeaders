/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKSetPlayerDataRequest.h"

@class NSString;

@interface GKSetStatusRequest : GKSetPlayerDataRequest {
@private
	NSString* _status;
}
@property(copy, nonatomic) NSString* status;	// @synthesize=_status
-(void)dealloc;
-(id)key;
-(id)request;
-(void)send;
// declared property setter: -(void)setStatus:(id)status;
// declared property getter: -(id)status;
@end

