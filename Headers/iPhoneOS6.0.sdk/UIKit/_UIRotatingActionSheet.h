/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheet.h"

@protocol UIActionSheetDelegate, _UIRotatingActionSheetDelegate;

@interface _UIRotatingActionSheet : UIActionSheet {
	id<_UIRotatingActionSheetDelegate> _rotatingSheetDelegate;
	id<UIActionSheetDelegate> _delegateWhileRotating;
	unsigned _arrowDirections;
	BOOL _isRotating;
}
@property(assign, nonatomic) unsigned arrowDirections;	// @synthesize=_arrowDirections
@property(assign, nonatomic) id<_UIRotatingActionSheetDelegate> rotatingSheetDelegate;	// @synthesize=_rotatingSheetDelegate
-(id)init;
-(void)_updateSheetPositionAfterRotation;
// declared property getter: -(unsigned)arrowDirections;
-(void)dealloc;
-(void)didRotate;
-(void)doneWithSheet;
-(BOOL)presentSheet;
-(BOOL)presentSheetFromRect:(CGRect)rect;
// declared property getter: -(id)rotatingSheetDelegate;
// declared property setter: -(void)setArrowDirections:(unsigned)directions;
// declared property setter: -(void)setRotatingSheetDelegate:(id)delegate;
-(void)willRotate;
@end
