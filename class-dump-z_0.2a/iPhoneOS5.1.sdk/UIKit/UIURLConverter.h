/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface UIURLConverter : XXUnknownSuperclass {
@private
	NSArray* _hostPatterns;
	NSArray* _hostSuffixWhiteList;
	NSArray* _pathPatterns;
	NSDictionary* _schemeMapping;
}
-(id)initWithURLConverterDictionary:(id)urlconverterDictionary;
-(BOOL)_URLMatchesHostSuffixWhiteList:(id)list;
-(BOOL)_URLMatchesPatterns:(id)patterns;
-(BOOL)_string:(id)string matchesPatterns:(id)patterns;
-(id)convertedURLForURL:(id)url;
-(void)dealloc;
-(void)setHostPatternStrings:(id)strings;
-(void)setHostSuffixWhiteList:(id)list;
-(void)setPathPatternStrings:(id)strings;
-(void)setSchemeMapping:(id)mapping;
@end
