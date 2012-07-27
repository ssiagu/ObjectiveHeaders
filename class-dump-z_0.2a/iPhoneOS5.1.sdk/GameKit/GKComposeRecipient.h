/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKit-Structs.h"

@class NSString;

@interface GKComposeRecipient : XXUnknownSuperclass {
	void* _record;
	int _recordID;
	int _property;
	int _identifier;
	NSString* _address;
	NSString* _label;
}
+(id)recipientWithProperty:(int)property address:(id)address;
+(id)recipientWithRecord:(void*)record property:(int)property identifier:(int)identifier;
+(id)recipientWithRecord:(void*)record recordID:(int)anId property:(int)property identifier:(int)identifier;
-(id)initWithRecord:(void*)record recordID:(int)anId property:(int)property identifier:(int)identifier address:(id)address;
-(id)_unformattedAddress;
-(id)address;
-(id)commentedAddress;
-(id)compositeName;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(id)displayString;
-(unsigned)hash;
-(int)identifier;
-(BOOL)isEmail;
-(BOOL)isEqual:(id)equal;
-(BOOL)isPhone;
-(id)label;
-(int)property;
-(void*)record;
-(int)recordID;
-(void)setIdentifier:(int)identifier;
-(void)setRecord:(void*)record recordID:(int)anId identifier:(int)identifier;
-(id)uncommentedAddress;
-(id)unlocalizedLabel;
@end
