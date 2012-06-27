/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSString.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString {
@private
	unsigned _lengthAndRefCount;
	unsigned short _characters[0];
}
+(id)pathStoreWithCharacters:(const unsigned short*)characters length:(unsigned)length;
+(id)pathWithComponents:(id)components;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;
-(id)_stringByStandardizingPathUsingCache:(BOOL)cache;
-(unsigned short)characterAtIndex:(unsigned)index;
-(id)copyWithZone:(NSZone*)zone;
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(unsigned)hash;
-(BOOL)isAbsolutePath;
-(BOOL)isEqualToString:(id)string;
-(id)lastPathComponent;
-(unsigned)length;
-(id)pathComponents;
-(id)pathExtension;
-(id)stringByAbbreviatingWithTildeInPath;
-(id)stringByAppendingPathComponent:(id)component;
-(id)stringByAppendingPathExtension:(id)extension;
-(id)stringByDeletingLastPathComponent;
-(id)stringByDeletingPathExtension;
-(id)stringByExpandingTildeInPath;
-(id)stringByResolvingSymlinksInPath;
-(id)stringByStandardizingPath;
@end
