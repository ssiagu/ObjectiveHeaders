/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UINavigationController.h"

@class UIView, NSMutableDictionary, NSArray;
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate;

@interface UIImagePickerController : UINavigationController <NSCoding> {
@private
	int _sourceType;
	id _image;
	CGRect _cropRect;
	NSArray* _mediaTypes;
	NSMutableDictionary* _properties;
	int _previousStatusBarStyle;
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned savingOptions : 3;
		unsigned didRevertStatusBar : 1;
	} _imagePickerFlags;
}
@property(assign, nonatomic) BOOL allowsEditing;
@property(assign, nonatomic) BOOL allowsImageEditing;
@property(assign, nonatomic) int cameraCaptureMode;
@property(assign, nonatomic) int cameraDevice;
@property(assign, nonatomic) int cameraFlashMode;
@property(retain, nonatomic) UIView* cameraOverlayView;
@property(assign, nonatomic) CGAffineTransform cameraViewTransform;
@property(assign, nonatomic) id<UINavigationControllerDelegate, UIImagePickerControllerDelegate> delegate;	// @dynamic
@property(copy, nonatomic) NSArray* mediaTypes;
@property(assign, nonatomic) BOOL showsCameraControls;
@property(assign, nonatomic) int sourceType;
@property(assign, nonatomic) double videoMaximumDuration;
@property(assign, nonatomic) int videoQuality;
+(BOOL)_isMediaTypeAvailable:(id)available forSource:(int)source;
+(BOOL)_reviewCapturedItems;
+(id)availableCaptureModesForCameraDevice:(int)cameraDevice;
+(id)availableMediaTypesForSourceType:(int)sourceType;
+(BOOL)isCameraDeviceAvailable:(int)available;
+(BOOL)isFlashAvailableForCameraDevice:(int)cameraDevice;
+(BOOL)isSourceTypeAvailable:(int)available;
-(id)init;
-(id)initWithCoder:(id)coder;
-(CGSize)_adjustedContentSizeForPopover:(CGSize)popover;
-(BOOL)_allowsImageEditing;
-(BOOL)_allowsMultipleSelection;
-(void)_autoDismiss;
-(id)_cameraViewController;
-(id)_createInitialController;
-(BOOL)_didRevertStatusBar;
-(void)_imagePickerDidCancel;
-(void)_imagePickerDidCompleteWithInfo:(id)_imagePicker;
-(void)_imagePickerDidCompleteWithInfoArray:(id)_imagePicker;
-(unsigned)_imagePickerSavingOptions;
-(id)_initWithSourceImageData:(id)sourceImageData cropRect:(CGRect)rect;
-(void)_initializeProperties;
-(BOOL)_isCameraCaptureModeValid:(int)valid;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(void)_populateArchivedChildViewControllers:(id)controllers;
-(id)_properties;
-(void)_removeAllChildren;
-(void)_setAllowsImageEditing:(BOOL)editing;
-(void)_setAllowsMultipleSelection:(BOOL)selection;
-(void)_setImagePickerSavingOptions:(unsigned)options;
-(void)_setProperties:(id)properties;
-(void)_setValue:(id)value forProperty:(id)property;
-(void)_setupControllersForCurrentMediaTypes;
-(void)_setupControllersForCurrentSourceType;
-(BOOL)_sourceTypeIsCamera;
-(void)_updateCameraCaptureMode;
-(id)_valueForProperty:(id)property;
// declared property getter: -(BOOL)allowsEditing;
// declared property getter: -(BOOL)allowsImageEditing;
// declared property getter: -(int)cameraCaptureMode;
// declared property getter: -(int)cameraDevice;
// declared property getter: -(int)cameraFlashMode;
// declared property getter: -(id)cameraOverlayView;
// declared property getter: -(CGAffineTransform)cameraViewTransform;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)mediaTypes;
// declared property setter: -(void)setAllowsEditing:(BOOL)editing;
// declared property setter: -(void)setAllowsImageEditing:(BOOL)editing;
// declared property setter: -(void)setCameraCaptureMode:(int)mode;
// declared property setter: -(void)setCameraDevice:(int)device;
// declared property setter: -(void)setCameraFlashMode:(int)mode;
// declared property setter: -(void)setCameraOverlayView:(id)view;
// declared property setter: -(void)setCameraViewTransform:(CGAffineTransform)transform;
// declared property setter: -(void)setMediaTypes:(id)types;
// declared property setter: -(void)setShowsCameraControls:(BOOL)controls;
// declared property setter: -(void)setSourceType:(int)type;
// declared property setter: -(void)setVideoMaximumDuration:(double)duration;
// declared property setter: -(void)setVideoQuality:(int)quality;
// declared property getter: -(BOOL)showsCameraControls;
// declared property getter: -(int)sourceType;
-(BOOL)startVideoCapture;
-(void)stopVideoCapture;
-(void)takePicture;
// declared property getter: -(double)videoMaximumDuration;
// declared property getter: -(int)videoQuality;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillUnload;
@end

