/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSData, NSDictionary, NSString;

@interface SKPayment : XXUnknownSuperclass <NSCopying, NSMutableCopying> {
@private
	id _internal;
}
@property(readonly, assign, nonatomic) NSString* productIdentifier;
@property(readonly, assign, nonatomic) int quantity;
@property(readonly, assign, nonatomic) NSData* requestData;
@property(readonly, assign, nonatomic) NSDictionary* requestParameters;
+(id)paymentWithProduct:(id)product;
+(id)paymentWithProductIdentifier:(id)productIdentifier;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
-(id)mutableCopyWithZone:(NSZone*)zone;
// declared property getter: -(id)productIdentifier;
// declared property getter: -(int)quantity;
// declared property getter: -(id)requestData;
// declared property getter: -(id)requestParameters;
@end

