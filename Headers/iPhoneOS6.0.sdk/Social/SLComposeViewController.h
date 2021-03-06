/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SLComposeViewController : XXUnknownSuperclass {
@private
	id _completionHandler;
	NSString* _serviceType;
}
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(readonly, assign, nonatomic) NSString* serviceType;	// @synthesize=_serviceType
+(BOOL)canShareItems:(id)items forServiceType:(id)serviceType;
+(id)composeViewControllerForServiceType:(id)serviceType;
+(BOOL)isAvailableForServiceType:(id)serviceType;
-(id)initWithServiceType:(id)serviceType;
-(void).cxx_destruct;
-(BOOL)addAttachment:(id)attachment;
-(id)addDownSampledImageDataByProxyWithPreviewImage:(id)previewImage;
-(BOOL)addImage:(id)image;
-(BOOL)addImageAsset:(id)asset;
-(BOOL)addURL:(id)url;
// declared property getter: -(id)completionHandler;
-(BOOL)removeAllImages;
-(BOOL)removeAllURLs;
// declared property getter: -(id)serviceType;
// declared property setter: -(void)setCompletionHandler:(id)handler;
-(BOOL)setInitialText:(id)text;
-(BOOL)supportsImageAsset:(id)asset;
@end

