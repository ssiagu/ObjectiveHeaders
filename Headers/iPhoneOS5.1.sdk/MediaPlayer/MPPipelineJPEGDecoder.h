/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MPPipelineJPEGDecoder : XXUnknownSuperclass {
@private
	StackItem* stackTopBGRA;
	StackItem* stackTop420;
	StackItem* stackTopJPEG;
	dispatch_queue_s* stackQueueBGRA;
	dispatch_queue_s* stackQueue420;
	dispatch_queue_s* stackQueueJPEG;
	CFDictionaryRef acceleratorOptions;
	CFDictionaryRef surfaceBGRAOptions;
	CGSize imageSize;
	unsigned requestedImageCount;
	int currentBGRASurfaceCount;
	unsigned maxJPEGSize;
}
@property(assign) unsigned maxJPEGSize;	// @synthesize
+(IOSurfaceAcceleratorRef)_createAccelerator;
+(IOSurfaceAcceleratorRef)_popSurfaceAccelerator;
+(void)_pushSurfaceAccelerator:(IOSurfaceAcceleratorRef)accelerator;
+(dispatch_queue_s*)_stackQueueTransferSession;
-(id)initWithSize:(CGSize)size cachedCount:(int)count;
-(IOSurfaceRef)_create420Surface;
-(IOSurfaceRef)_createBGRASurface;
-(IOSurfaceRef)_createJPEGSurface;
-(void)_decodeJPEG:(id)jpeg withInputSurface:(IOSurfaceRef)inputSurface toIOSurface:(IOSurfaceRef)iosurface;
-(id)_newImageFrom420Surface:(IOSurfaceRef)a420Surface;
-(IOSurfaceRef)_pop420Surface;
-(IOSurfaceRef)_popBGRASurface;
-(IOSurfaceRef)_popJPEGSurfaceOfSize:(unsigned)size;
-(void)_push420Surface:(IOSurfaceRef)surface;
-(void)_pushBGRASurface:(IOSurfaceRef)surface;
-(void)_pushJPEGSurface:(IOSurfaceRef)surface;
-(void)_receivedMemoryWarning:(id)warning;
-(void)_removeBGRASurface;
-(void)dealloc;
// declared property getter: -(unsigned)maxJPEGSize;
-(id)newImageFrom420Data:(id)a420Data;
-(id)newImageFromJPEGData:(id)jpegdata;
// declared property setter: -(void)setMaxJPEGSize:(unsigned)size;
@end

