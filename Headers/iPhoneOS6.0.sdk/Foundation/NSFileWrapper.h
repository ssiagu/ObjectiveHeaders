/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "NSCoding.h"

@class NSString, NSDictionary;

@interface NSFileWrapper : NSObject <NSCoding> {
@private
	NSDictionary* _fileAttributes;
	NSString* _preferredFileName;
	NSString* _fileName;
	id _contents;
	id _icon;
	id _moreVars;
}
+(BOOL)_canSafelyMapFilesAtPath:(id)path;
+(BOOL)_finishWritingToURL:(id)url byMovingItemAtURL:(id)url2 addingAttributes:(id)attributes error:(id*)error;
+(BOOL)_finishWritingToURL:(id)url byTakingContentsFromItemAtURL:(id)url2 addingAttributes:(id)attributes usingTemporaryDirectoryAtURL:(id)url4 backupFileName:(id)name error:(id*)error;
+(BOOL)_forPath:(id)path getItemKind:(id*)kind modificationDate:(id*)date;
+(id)_newContentsAtURL:(id)url path:(id)path itemKind:(id)kind oldChildrenByUniqueFileName:(id)name options:(unsigned)options error:(id*)error;
+(id)_pathForURL:(id)url reading:(BOOL)reading error:(id*)error;
+(void)_removeTemporaryDirectoryAtURL:(id)url;
+(id)_temporaryDirectoryURLForWritingToURL:(id)url error:(id*)error;
+(void)_writeAttributes:(id)attributes toURL:(id)url;
+(void)initialize;
-(id)init;
-(id)initDirectoryWithFileWrappers:(id)fileWrappers;
-(id)initRegularFileWithContents:(id)contents;
-(id)initSymbolicLinkWithDestinationURL:(id)destinationURL;
-(id)initWithCoder:(id)coder;
-(id)initWithSerializedRepresentation:(id)serializedRepresentation;
-(id)initWithURL:(id)url options:(unsigned)options error:(id*)error;
-(id)_addChild:(id)child forUniqueFileName:(id)uniqueFileName;
-(void)_addParent:(id)parent;
-(id)_attributesToWrite;
-(void)_forWritingToURL:(id)url returnContentsLazyReadingError:(id*)error;
-(id)_fullDescription:(BOOL)description;
-(id)_init;
-(void)_initDirectoryContents;
-(id)_initWithImpl:(id)impl preferredFileName:(id)name uniqueFileName:(id)name3 docInfo:(id)info iconData:(id)data;
-(BOOL)_matchesItemKind:(id)kind modificationDate:(id)date;
-(id)_newImpl;
-(void)_observePreferredFileNameOfChild:(id)child;
-(BOOL)_readContentsFromURL:(id)url path:(id)path itemKind:(id)kind options:(unsigned)options error:(id*)error;
-(void)_removeChild:(id)child forUniqueFileName:(id)uniqueFileName;
-(void)_removeParent:(id)parent;
-(void)_resetFileModificationDate;
-(id)_uniqueFileNameOfChild:(id)child;
-(void)_updateDescendantFileNames;
-(BOOL)_writeContentsToURL:(id)url path:(id)path originalContentsURL:(id)url3 tryHardLinking:(BOOL)linking didHardLinking:(BOOL*)linking5 error:(id*)error;
-(id)addFileWrapper:(id)wrapper;
-(id)addRegularFileWithContents:(id)contents preferredFilename:(id)filename;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)fileAttributes;
-(id)fileWrappers;
-(id)filename;
-(BOOL)isDirectory;
-(BOOL)isRegularFile;
-(BOOL)isSymbolicLink;
-(id)keyForFileWrapper:(id)fileWrapper;
-(BOOL)matchesContentsOfURL:(id)url;
-(id)preferredFilename;
-(BOOL)readFromURL:(id)url options:(unsigned)options error:(id*)error;
-(id)regularFileContents;
-(void)removeFileWrapper:(id)wrapper;
-(id)serializedRepresentation;
-(void)setFileAttributes:(id)attributes;
-(void)setFilename:(id)filename;
-(void)setPreferredFilename:(id)filename;
-(id)symbolicLinkDestinationURL;
-(BOOL)writeToURL:(id)url options:(unsigned)options originalContentsURL:(id)url3 error:(id*)error;
@end

