/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GEOGeocodeRequest;

__attribute__((visibility("hidden")))
@interface CLGeocoderInternal : XXUnknownSuperclass {
@private
	id _geocodeCompletionHandler;
	GEOGeocodeRequest* _request;
	dispatch_queue_s* _queue;
}
@end
