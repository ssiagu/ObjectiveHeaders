/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AVAssetResourceLoadingRequestInternal, NSURLRequest;

@interface AVAssetResourceLoadingRequest : XXUnknownSuperclass {
@private
	AVAssetResourceLoadingRequestInternal* _loadingRequest;
}
@property(readonly, assign, nonatomic) BOOL finished;
@property(readonly, assign, nonatomic) NSURLRequest* request;
-(id)initWithResourceLoader:(id)resourceLoader requestDictionary:(id)dictionary;
-(void)_finishLoadingURLRequestWithDictionary:(id)dictionary context:(id)context;
-(void)dealloc;
-(id)description;
-(void)finalize;
-(void)finishLoadingWithError:(id)error;
-(void)finishLoadingWithResponse:(id)response data:(id)data redirect:(id)redirect;
// declared property getter: -(BOOL)finished;
// declared property getter: -(id)request;
-(id)serializableRepresentation;
-(id)streamingContentKeyRequestDataForApp:(id)app contentIdentifier:(id)identifier options:(id)options error:(id*)error;
@end
