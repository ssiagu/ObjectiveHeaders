/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, NSDictionary, NSString;

@interface ADLocalAd : XXUnknownSuperclass {
@private
	NSString* _path;
	NSString* _name;
	NSDictionary* _creatives;
	NSString* _selectedCreativeName;
	NSDictionary* _properties;
	NSSet* _sizes;
}
@property(readonly, assign, nonatomic) NSDictionary* creatives;	// @synthesize=_creatives
@property(retain, nonatomic) NSString* name;	// @synthesize=_name
@property(retain, nonatomic) NSString* path;	// @synthesize=_path
@property(retain, nonatomic) NSDictionary* properties;	// @synthesize=_properties
@property(copy, nonatomic) NSString* selectedCreativeName;	// @synthesize=_selectedCreativeName
@property(readonly, assign, nonatomic) NSSet* sizes;	// @synthesize=_sizes
+(id)localAdWithURL:(id)url;
-(id)initWithPath:(id)path error:(id*)error;
// declared property getter: -(id)creatives;
-(void)dealloc;
// declared property getter: -(id)name;
// declared property getter: -(id)path;
// declared property getter: -(id)properties;
// declared property getter: -(id)selectedCreativeName;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setPath:(id)path;
// declared property setter: -(void)setProperties:(id)properties;
// declared property setter: -(void)setSelectedCreativeName:(id)name;
// declared property getter: -(id)sizes;
@end
