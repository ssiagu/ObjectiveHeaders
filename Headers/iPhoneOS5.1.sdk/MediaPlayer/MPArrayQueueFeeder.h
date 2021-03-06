/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPQueueFeeder.h"

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {
	NSArray* _queueItems;
}
@property(readonly, assign, nonatomic) NSArray* items;
-(id)initWithItems:(id)items;
-(double)bookmarkTimeForIndex:(unsigned)index;
-(id)copyRawItemAtIndex:(unsigned)index;
-(void)dealloc;
// declared property getter: -(id)items;
-(unsigned)numberOfPaths;
-(id)pathAtIndex:(unsigned)index;
-(id)playbackInfoAtIndex:(unsigned)index;
@end

