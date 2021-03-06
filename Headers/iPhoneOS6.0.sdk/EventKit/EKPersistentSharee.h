/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentObject.h"
#import "NSCopying.h"

@class NSString;

@interface EKPersistentSharee : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString* UUID;
@property(copy, nonatomic) NSString* emailAddress;
@property(copy, nonatomic) NSString* externalID;
@property(copy, nonatomic) NSString* name;
@property(assign, nonatomic) int shareeAccessLevel;
@property(assign, nonatomic) int shareeStatus;
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)shareeWithEmailAddress:(id)emailAddress name:(id)name;
+(id)shareeWithName:(id)name emailAddress:(id)address externalID:(id)anId;
-(id)init;
-(id)initWithEmailAddress:(id)emailAddress name:(id)name;
-(id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId;
// declared property getter: -(id)UUID;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
// declared property getter: -(id)emailAddress;
-(int)entityType;
// declared property getter: -(id)externalID;
-(unsigned)hash;
// declared property getter: -(id)name;
-(id)owner;
// declared property setter: -(void)setEmailAddress:(id)address;
// declared property setter: -(void)setExternalID:(id)anId;
// declared property setter: -(void)setName:(id)name;
-(void)setOwner:(id)owner;
// declared property setter: -(void)setShareeAccessLevel:(int)level;
// declared property setter: -(void)setShareeStatus:(int)status;
// declared property getter: -(int)shareeAccessLevel;
// declared property getter: -(int)shareeStatus;
@end

