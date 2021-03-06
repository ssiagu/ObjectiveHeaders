/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import </libobjc.A.h>

@class CMDeviceMotion, CMGyroData, CMAccelerometerData, CMMagnetometerData;

@interface CMMotionManager : NSObject {
@private
	id _internal;
}
@property(readonly, assign, nonatomic, getter=isAccelerometerActive) BOOL accelerometerActive;	// @dynamic
@property(readonly, assign, nonatomic, getter=isAccelerometerAvailable) BOOL accelerometerAvailable;	// @dynamic
@property(readonly, assign) CMAccelerometerData* accelerometerData;	// @dynamic
@property(assign, nonatomic) double accelerometerUpdateInterval;	// @dynamic
@property(readonly, assign, nonatomic) int attitudeReferenceFrame;	// @dynamic
@property(readonly, assign) CMDeviceMotion* deviceMotion;	// @dynamic
@property(readonly, assign, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;	// @dynamic
@property(readonly, assign, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;	// @dynamic
@property(assign, nonatomic) double deviceMotionUpdateInterval;	// @dynamic
@property(readonly, assign, nonatomic, getter=isGyroActive) BOOL gyroActive;	// @dynamic
@property(readonly, assign, nonatomic, getter=isGyroAvailable) BOOL gyroAvailable;	// @dynamic
@property(readonly, assign) CMGyroData* gyroData;	// @dynamic
@property(assign, nonatomic) double gyroUpdateInterval;	// @dynamic
@property(readonly, assign, nonatomic, getter=isMagnetometerActive) BOOL magnetometerActive;
@property(readonly, assign, nonatomic, getter=isMagnetometerAvailable) BOOL magnetometerAvailable;
@property(readonly, assign) CMMagnetometerData* magnetometerData;
@property(assign, nonatomic) double magnetometerUpdateInterval;
@property(assign, nonatomic) BOOL showsDeviceMovementDisplay;
+(unsigned)availableAttitudeReferenceFrames;
+(void)dummySelector:(id)selector;
+(void)initialize;
+(void)setAllowInBackground:(BOOL)background;
-(id)init;
-(id)initPrivate;
-(id)initUsing6AxisSensorFusion;
-(id)initUsingGyroOnlySensorFusion;
// declared property getter: -(id)accelerometerData;
// declared property getter: -(double)accelerometerUpdateInterval;
// declared property getter: -(int)attitudeReferenceFrame;
-(void)dealloc;
-(void)deallocPrivate;
// declared property getter: -(id)deviceMotion;
// declared property getter: -(double)deviceMotionUpdateInterval;
-(void)didBecomeActive:(id)active;
-(void)didBecomeActivePrivate:(id)aPrivate;
-(void)dismissDeviceMovementDisplay;
// declared property getter: -(id)gyroData;
// declared property getter: -(double)gyroUpdateInterval;
// declared property getter: -(BOOL)isAccelerometerActive;
// declared property getter: -(BOOL)isAccelerometerAvailable;
// declared property getter: -(BOOL)isDeviceMotionActive;
// declared property getter: -(BOOL)isDeviceMotionAvailable;
// declared property getter: -(BOOL)isGyroActive;
// declared property getter: -(BOOL)isGyroAvailable;
// declared property getter: -(BOOL)isMagnetometerActive;
// declared property getter: -(BOOL)isMagnetometerAvailable;
// declared property getter: -(id)magnetometerData;
// declared property getter: -(double)magnetometerUpdateInterval;
-(void)onAccelerometer:(const Sample*)accelerometer;
-(void)onDeviceMotion:(const Sample*)motion;
-(void)onGeomagneticModel:(const XXStruct_01mbIB*)model;
-(void)onGyro:(const Sample*)gyro;
-(void)onMagnetometer:(const Sample*)magnetometer;
-(void)setAccelerometerDataCallback:(/*function-pointer*/ void*)callback info:(void*)info interval:(double)interval;
// declared property setter: -(void)setAccelerometerUpdateInterval:(double)interval;
-(void)setAccelerometerUpdateIntervalPrivate:(double)aPrivate;
-(void)setDeviceMotionCallback:(/*function-pointer*/ void*)callback info:(void*)info interval:(double)interval fsync:(BOOL)fsync;
// declared property setter: -(void)setDeviceMotionUpdateInterval:(double)interval;
-(void)setDeviceMotionUpdateIntervalPrivate:(double)aPrivate;
-(void)setGyroDataCallback:(/*function-pointer*/ void*)callback info:(void*)info interval:(double)interval;
// declared property setter: -(void)setGyroUpdateInterval:(double)interval;
-(void)setGyroUpdateIntervalPrivate:(double)aPrivate;
// declared property setter: -(void)setMagnetometerUpdateInterval:(double)interval;
-(void)setMagnetometerUpdateIntervalPrivate:(double)aPrivate;
// declared property setter: -(void)setShowsDeviceMovementDisplay:(BOOL)display;
-(void)setShowsDeviceMovementDisplayPrivate:(BOOL)aPrivate;
-(void)setUseAccelerometer:(BOOL)accelerometer;
-(void)showDeviceMovementDisplay;
// declared property getter: -(BOOL)showsDeviceMovementDisplay;
-(void)startAccelerometerUpdates;
-(void)startAccelerometerUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;
-(void)startAccelerometerUpdatesToQueue:(id)queue withHandler:(id)handler;
-(void)startDeviceMotionUpdates;
-(void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(int)frame toQueue:(id)queue withHandler:(id)handler;
-(void)startDeviceMotionUpdatesToQueue:(id)queue withHandler:(id)handler;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(int)frame;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(int)frame toQueue:(id)queue withHandler:(id)handler;
-(void)startGyroUpdates;
-(void)startGyroUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;
-(void)startGyroUpdatesToQueue:(id)queue withHandler:(id)handler;
-(void)startMagnetometerUpdates;
-(void)startMagnetometerUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;
-(void)startMagnetometerUpdatesToQueue:(id)queue withHandler:(id)handler;
-(void)stopAccelerometerUpdates;
-(void)stopAccelerometerUpdatesPrivate;
-(void)stopDeviceMotionUpdates;
-(void)stopDeviceMotionUpdatesPrivate;
-(void)stopGyroUpdates;
-(void)stopGyroUpdatesPrivate;
-(void)stopMagnetometerUpdates;
-(void)stopMagnetometerUpdatesPrivate;
-(BOOL)useAccelerometer;
-(void)willResignActive:(id)active;
-(void)willResignActivePrivate:(id)aPrivate;
@end

