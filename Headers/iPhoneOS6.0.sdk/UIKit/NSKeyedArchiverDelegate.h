/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol NSKeyedArchiverDelegate <NSObject>
@optional
-(void)archiver:(id)archiver didEncodeObject:(id)object;
-(id)archiver:(id)archiver willEncodeObject:(id)object;
-(void)archiver:(id)archiver willReplaceObject:(id)object withObject:(id)object3;
-(void)archiverDidFinish:(id)archiver;
-(void)archiverWillFinish:(id)archiver;
@end

