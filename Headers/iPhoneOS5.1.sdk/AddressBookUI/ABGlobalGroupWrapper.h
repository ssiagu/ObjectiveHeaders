/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABGroupWrapper.h"


@interface ABGlobalGroupWrapper : ABGroupWrapper {
@private
	BOOL _showLinkedPeople;
}
@property(assign, nonatomic) BOOL showLinkedPeople;	// @synthesize=_showLinkedPeople
+(id)newGlobalGroupWrapperWithAddressBook:(void*)addressBook;
+(id)newGlobalGroupWrapperWithAddressBook:(void*)addressBook showLinkedPeople:(BOOL)people;
-(id)description;
-(BOOL)isEditable;
-(BOOL)isEqual:(id)equal;
-(BOOL)isGlobalWrapper;
-(id)name;
// declared property setter: -(void)setShowLinkedPeople:(BOOL)people;
// declared property getter: -(BOOL)showLinkedPeople;
@end
