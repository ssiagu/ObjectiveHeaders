/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL;

@interface SLTwitterUserRecord : XXUnknownSuperclass {
	NSString* _id_str;
	NSString* _screen_name;
	NSString* _name;
	NSString* _profile_image_url;
	NSURL* _objectID;
}
@property(copy, nonatomic) NSString* id_str;	// @synthesize=_id_str
@property(copy, nonatomic) NSString* name;	// @synthesize=_name
@property(copy, nonatomic) NSString* profile_image_url;	// @synthesize=_profile_image_url
@property(copy, nonatomic) NSString* screen_name;	// @synthesize=_screen_name
+(id)userRecordWithDictionaryRepresentation:(id)dictionaryRepresentation;
+(id)userRecordWithScreenName:(id)screenName;
-(id)initWithCoder:(id)coder;
-(void).cxx_destruct;
-(id)description;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)id_str;
// declared property getter: -(id)name;
-(id)objectID;
// declared property getter: -(id)profile_image_url;
// declared property getter: -(id)screen_name;
// declared property setter: -(void)setId_str:(id)str;
// declared property setter: -(void)setName:(id)name;
-(void)setObjectID:(id)anId;
// declared property setter: -(void)setProfile_image_url:(id)url;
// declared property setter: -(void)setScreen_name:(id)name;
-(void)setValuesWithUserRecordRep:(id)userRecordRep;
@end
