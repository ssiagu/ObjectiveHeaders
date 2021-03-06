/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIDetector.h"
#import "CIFaceCoreDetector.h"

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIFaceCoreDetector : CIDetector {
@private
	CIContext* context;
	void* faceCoreAPI;
}
@property(retain, nonatomic) CIContext* context;	// @synthesize
@property(assign) void* faceCoreAPI;	// @synthesize
-(id)initWithContext:(id)context options:(id)options;
-(FaceCoreAPI*)api;
// declared property getter: -(id)context;
-(void)dealloc;
// declared property getter: -(void*)faceCoreAPI;
-(id)featuresInImage:(id)image;
-(id)featuresInImage:(id)image options:(id)options;
-(void)finalize;
// declared property setter: -(void)setContext:(id)context;
// declared property setter: -(void)setFaceCoreAPI:(void*)api;
@end

@interface CIFaceCoreDetector (Private)
-(id)adjustedImageFromImage:(id)image orientation:(int)orientation inverseCTM:(CGAffineTransform*)ctm;
-(BOOL)createFaceCoreImage:(image*)image fromCIImage:(id)ciimage;
-(CGAffineTransform)ctmForImageWithBounds:(CGRect)bounds orientation:(int)orientation;
-(id)featuresFromFaceVector:(vector<vision::lib::face, std::allocator<vision::lib::face> >*)faceVector ctm:(CGAffineTransform)ctm;
@end

