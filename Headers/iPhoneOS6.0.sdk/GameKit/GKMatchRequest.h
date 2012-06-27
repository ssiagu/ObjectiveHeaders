/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKMatchRequestInternal, NSString, NSArray;

@interface GKMatchRequest : XXUnknownSuperclass {
@private
	id _inviteeResponseHandler;
	GKMatchRequestInternal* _internal;
}
@property(retain, nonatomic) GKMatchRequestInternal* internal;	// @synthesize=_internal
@property(copy, nonatomic) NSString* inviteMessage;	// @dynamic
@property(copy, nonatomic) id inviteeResponseHandler;	// @synthesize=_inviteeResponseHandler
@property(assign, nonatomic) unsigned maxPlayers;	// @dynamic
@property(assign, nonatomic) unsigned minPlayers;	// @dynamic
@property(assign, nonatomic) unsigned playerAttributes;	// @dynamic
@property(assign, nonatomic) unsigned playerGroup;	// @dynamic
@property(retain, nonatomic) NSArray* playersToInvite;	// @dynamic
+(BOOL)instancesRespondToSelector:(SEL)selector;
+(unsigned)maxPlayersAllowedForMatchOfType:(unsigned)type;
-(id)init;
-(id)initWithInternalRepresentation:(id)internalRepresentation;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)selector;
// declared property getter: -(id)internal;
// declared property getter: -(id)inviteeResponseHandler;
-(BOOL)isTurnBasedValid;
-(BOOL)isValidForHosted:(BOOL)hosted;
-(void)removeLocalPlayerFromPlayersToInvite;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setInternal:(id)internal;
// declared property setter: -(void)setInviteeResponseHandler:(id)handler;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end
