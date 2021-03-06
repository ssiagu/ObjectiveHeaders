/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface MKTiledLayer : XXUnknownSuperclass {
	struct {
		unsigned displayBaseTiles : 1;
		unsigned delegateDisplayBaseTiles : 1;
		unsigned delegateRenderLayer : 1;
	} _flags;
}
@property(readonly, assign, nonatomic) CADoubleRect visibleDoubleRect;
+(CGSize)contentSize;
+(id)defaultValueForKey:(id)key;
+(double)fadeDuration;
+(unsigned)levelsOfDetail;
+(unsigned)prefetchedTiles;
-(void)display;
-(void)displayBaseTiles;
-(void)displayTileKey:(const GEOTileKey*)key;
-(void)flush;
-(void)renderInContext:(CGContextRef)context;
-(void)setDelegate:(id)delegate;
-(void)setNeedsDisplayInTileKey:(const GEOTileKey*)tileKey;
// declared property getter: -(CADoubleRect)visibleDoubleRect;
@end

