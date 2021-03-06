/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "PassKit-Structs.h"
#import "NSSecureCoding.h"

@class NSData, WLColor;

@interface WLCardDisplayProfile : XXUnknownSuperclass <NSSecureCoding, NSCopying> {
@private
	int _cardTemplate;
	WLColor* _backgroundColor;
	WLColor* _foregroundColor;
	WLColor* _labelColor;
	WLColor* _stripColor;
	NSData* _iconHash;
	NSData* _logoHash;
	NSData* _thumbnailHash;
	NSData* _backgroundHash;
	BOOL _backgroundShine;
}
@property(retain, nonatomic) WLColor* backgroundColor;	// @synthesize=_backgroundColor
@property(retain, nonatomic) NSData* backgroundHash;	// @synthesize=_backgroundHash
@property(assign, nonatomic) BOOL backgroundShine;	// @synthesize=_backgroundShine
@property(assign, nonatomic) int cardTemplate;	// @synthesize=_cardTemplate
@property(retain, nonatomic) WLColor* foregroundColor;	// @synthesize=_foregroundColor
@property(retain, nonatomic) NSData* iconHash;	// @synthesize=_iconHash
@property(retain, nonatomic) WLColor* labelColor;	// @synthesize=_labelColor
@property(retain, nonatomic) NSData* logoHash;	// @synthesize=_logoHash
@property(retain, nonatomic) WLColor* stripColor;	// @synthesize=_stripColor
@property(retain, nonatomic) NSData* thumbnailHash;	// @synthesize=_thumbnailHash
+(BOOL)supportsSecureCoding;
-(id)initWithCardDictionary:(id)cardDictionary cardURL:(id)url;
-(id)initWithCoder:(id)coder;
// declared property getter: -(id)backgroundColor;
// declared property getter: -(id)backgroundHash;
// declared property getter: -(BOOL)backgroundShine;
// declared property getter: -(int)cardTemplate;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)foregroundColor;
// declared property getter: -(id)iconHash;
// declared property getter: -(id)labelColor;
// declared property getter: -(id)logoHash;
// declared property setter: -(void)setBackgroundColor:(id)color;
// declared property setter: -(void)setBackgroundHash:(id)hash;
// declared property setter: -(void)setBackgroundShine:(BOOL)shine;
// declared property setter: -(void)setCardTemplate:(int)aTemplate;
// declared property setter: -(void)setForegroundColor:(id)color;
// declared property setter: -(void)setIconHash:(id)hash;
// declared property setter: -(void)setLabelColor:(id)color;
// declared property setter: -(void)setLogoHash:(id)hash;
// declared property setter: -(void)setStripColor:(id)color;
// declared property setter: -(void)setThumbnailHash:(id)hash;
-(BOOL)showsBackgroundImage;
-(BOOL)showsStripImage;
// declared property getter: -(id)stripColor;
// declared property getter: -(id)thumbnailHash;
@end

