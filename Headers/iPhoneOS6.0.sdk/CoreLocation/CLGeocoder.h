/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CLGeocoderInternal;

@interface CLGeocoder : XXUnknownSuperclass {
@private
	CLGeocoderInternal* _internal;
}
@property(readonly, assign, nonatomic, getter=isGeocoding) BOOL geocoding;
-(id)init;
-(void)_ensureMainThreadExecutionContextForBlock:(id)block;
-(void)_notifyCancel;
-(void)_notifyError:(id)error;
-(void)_notifyNoResult;
-(void)_notifyPartialResult:(id)result;
-(void)_notifyResult:(id)result;
-(void)_notifyResult:(id)result error:(id)error;
-(id)_placemarkWithLocation:(id)location;
-(id)_placemarkWithPlace:(id)place;
-(void)_request:(id)request didReturnError:(id)error;
-(void)_request:(id)request didReturnError:(id)error partialResultForLocation:(id)location;
-(void)_request:(id)request didReturnResponse:(id)response;
-(void)_setLoggingPropertiesForRequest:(id)request;
-(void)cancelGeocode;
-(void)dealloc;
-(void)geocodeAddressDictionary:(id)dictionary completionHandler:(id)handler;
-(void)geocodeAddressString:(id)string completionHandler:(id)handler;
-(void)geocodeAddressString:(id)string inRegion:(id)region completionHandler:(id)handler;
// declared property getter: -(BOOL)isGeocoding;
-(void)reverseGeocodeLocation:(id)location completionHandler:(id)handler;
-(void)reverseGeocodeLocation:(id)location heading:(double)heading completionHandler:(id)handler;
-(void)reverseGeocodeLocation:(id)location heading:(double)heading localResultsOnly:(BOOL)only completionHandler:(id)handler;
-(void)reverseGeocodeLocation:(id)location localResultsOnly:(BOOL)only completionHandler:(id)handler;
@end

