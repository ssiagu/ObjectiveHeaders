/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "MKAnnotation.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GEOTransitAgent, MKPolygon, NSString, MKDate, UIImage, NSArray;

@interface MKRouteStep : XXUnknownSuperclass <MKAnnotation> {
	int _mode;
	int _type;
	CADoublePoint _coordinate;
	unsigned _pointIndex;
	unsigned _numberOfPoints;
	NSString* _instructions;
	NSString* _direction;
	NSString* _departureAddress;
	NSString* _arrivalAddress;
	int _distanceMeters;
	BOOL _displaysDistanceInMetric;
	int _departureIntervalSeconds;
	int _durationSeconds;
	MKDate* _departureDate;
	MKDate* _arrivalDate;
	NSString* _iconName;
	UIImage* _nonCacheableIcon;
	NSString* _transitCaption;
	NSArray* _notices;
	XXStruct_Yvvv9D _boundingMapRect;
	unsigned _stepIndex;
	MKPolygon* _boundingPolygon;
	GEOTransitAgent* _transitAgent;
	id _object;
}
@property(retain, nonatomic) NSString* arrivalAddress;	// @synthesize=_arrivalAddress
@property(retain, nonatomic) MKDate* arrivalDate;	// @synthesize=_arrivalDate
@property(assign, nonatomic) XXStruct_Yvvv9D boundingMapRect;	// @synthesize=_boundingMapRect
@property(retain, nonatomic) MKPolygon* boundingPolygon;	// @synthesize=_boundingPolygon
@property(readonly, assign, nonatomic) CADoublePoint coordinate;	// @synthesize=_coordinate
@property(retain, nonatomic) NSString* departureAddress;	// @synthesize=_departureAddress
@property(retain, nonatomic) MKDate* departureDate;	// @synthesize=_departureDate
@property(readonly, assign, nonatomic) int departureIntervalSeconds;	// @synthesize=_departureIntervalSeconds
@property(retain, nonatomic) NSString* direction;	// @synthesize=_direction
@property(readonly, assign, nonatomic) NSString* distance;
@property(readonly, assign, nonatomic) int distanceMeters;	// @synthesize=_distanceMeters
@property(readonly, assign, nonatomic) int durationSeconds;	// @synthesize=_durationSeconds
@property(readonly, assign, nonatomic) UIImage* icon;
@property(readonly, assign, nonatomic) NSString* iconName;
@property(readonly, assign, nonatomic) NSString* instructions;	// @synthesize=_instructions
@property(readonly, assign, nonatomic) int mode;	// @synthesize=_mode
@property(retain, nonatomic) UIImage* nonCacheableIcon;
@property(retain, nonatomic) NSArray* notices;	// @synthesize=_notices
@property(assign, nonatomic) unsigned numberOfPoints;	// @synthesize=_numberOfPoints
@property(retain, nonatomic) id object;	// @synthesize=_object
@property(readonly, assign, nonatomic) unsigned pointIndex;	// @synthesize=_pointIndex
@property(readonly, assign, nonatomic) NSString* shortInstructions;
@property(assign, nonatomic) unsigned stepIndex;	// @synthesize=_stepIndex
@property(readonly, assign, nonatomic) NSString* subtitle;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) GEOTransitAgent* transitAgent;	// @synthesize=_transitAgent
@property(retain, nonatomic) NSString* transitCaption;	// @synthesize=_transitCaption
@property(readonly, assign, nonatomic) NSString* tripDescription;
@property(readonly, assign, nonatomic) int type;	// @synthesize=_type
-(id)_initWithStep:(id)step distanceMeters:(int)meters displaysMetric:(BOOL)metric type:(int)type coordinate:(CADoublePoint)coordinate pointIndex:(unsigned)index transitAgent:(id)agent;
-(id)_initWithType:(int)type mode:(int)mode coordinate:(CADoublePoint)coordinate pointIndex:(unsigned)index instructions:(id)instructions distanceMeters:(int)meters displaysMetric:(BOOL)metric iconName:(id)name;
-(id)_transitDepartureInterval;
-(id)_transitDistance;
-(id)_transitDuration;
// declared property getter: -(id)arrivalAddress;
// declared property getter: -(id)arrivalDate;
// declared property getter: -(XXStruct_Yvvv9D)boundingMapRect;
// declared property getter: -(id)boundingPolygon;
// declared property getter: -(CADoublePoint)coordinate;
-(void)dealloc;
// declared property getter: -(id)departureAddress;
// declared property getter: -(id)departureDate;
// declared property getter: -(int)departureIntervalSeconds;
-(id)description;
// declared property getter: -(id)direction;
// declared property getter: -(id)distance;
// declared property getter: -(int)distanceMeters;
// declared property getter: -(int)durationSeconds;
// declared property getter: -(id)icon;
// declared property getter: -(id)iconName;
// declared property getter: -(id)instructions;
// declared property getter: -(int)mode;
// declared property getter: -(id)nonCacheableIcon;
// declared property getter: -(id)notices;
// declared property getter: -(unsigned)numberOfPoints;
// declared property getter: -(id)object;
// declared property getter: -(unsigned)pointIndex;
// declared property setter: -(void)setArrivalAddress:(id)address;
// declared property setter: -(void)setArrivalDate:(id)date;
// declared property setter: -(void)setBoundingMapRect:(XXStruct_Yvvv9D)rect;
// declared property setter: -(void)setBoundingPolygon:(id)polygon;
// declared property setter: -(void)setDepartureAddress:(id)address;
// declared property setter: -(void)setDepartureDate:(id)date;
// declared property setter: -(void)setDirection:(id)direction;
// declared property setter: -(void)setNonCacheableIcon:(id)icon;
// declared property setter: -(void)setNotices:(id)notices;
// declared property setter: -(void)setNumberOfPoints:(unsigned)points;
// declared property setter: -(void)setObject:(id)object;
// declared property setter: -(void)setStepIndex:(unsigned)index;
// declared property setter: -(void)setTransitCaption:(id)caption;
// declared property getter: -(id)shortInstructions;
// declared property getter: -(unsigned)stepIndex;
// declared property getter: -(id)subtitle;
// declared property getter: -(id)title;
// declared property getter: -(id)transitAgent;
// declared property getter: -(id)transitCaption;
// declared property getter: -(id)tripDescription;
// declared property getter: -(int)type;
@end
