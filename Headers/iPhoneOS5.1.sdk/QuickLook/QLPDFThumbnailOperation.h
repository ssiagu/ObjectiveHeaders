/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "QLThumbnailOperation.h"


@interface QLPDFThumbnailOperation : QLThumbnailOperation {
	CGPDFDocumentRef _documentRef;
}
-(id)initWithPDFDocumentRef:(CGPDFDocumentRef)pdfdocumentRef;
-(void)dealloc;
-(void)main;
@end

