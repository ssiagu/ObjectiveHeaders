/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, AVAssetCacheInternal;

@interface AVAssetCache : XXUnknownSuperclass {
@private
	AVAssetCacheInternal* _priv;
}
@property(readonly, assign, nonatomic) NSURL* URL;
@property(readonly, assign, nonatomic) long long currentSize;
@property(assign, nonatomic) long long maxEntrySize;
@property(assign, nonatomic) long long maxSize;
+(id)assetCacheWithURL:(id)url;
-(id)initWithURL:(id)url;
// declared property getter: -(id)URL;
-(id)allKeys;
// declared property getter: -(long long)currentSize;
-(void)dealloc;
-(void)finalize;
// declared property getter: -(long long)maxEntrySize;
// declared property getter: -(long long)maxSize;
-(void)removeEntryForKey:(id)key;
// declared property setter: -(void)setMaxEntrySize:(long long)size;
// declared property setter: -(void)setMaxSize:(long long)size;
-(long long)sizeOfEntryForKey:(id)key;
@end

