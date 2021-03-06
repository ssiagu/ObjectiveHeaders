/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol ABPersonCellLayoutManagerDelegate, ABStyleProvider;

@interface ABPersonCellLayoutManager : XXUnknownSuperclass {
@private
	id<ABPersonCellLayoutManagerDelegate> _delegate;
	id<ABStyleProvider> _styleProvider;
}
@property(assign, nonatomic) id<ABPersonCellLayoutManagerDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// @synthesize=_styleProvider
-(float)accessoryViewInsetForBounds:(CGRect)bounds;
-(CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(void)cell:(id)cell didTransitionToState:(unsigned)state;
-(void)cell:(id)cell willTransitionToState:(unsigned)state;
-(id)cellAsMultiCell:(id)cell;
-(CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(CGRect)deleteConfirmationRectForCell:(id)cell;
-(float)deleteConfirmationWidth;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setStyleProvider:(id)provider;
// declared property getter: -(id)styleProvider;
-(float)widthForCellContentViewInTableView:(id)tableView whenEditing:(BOOL)editing isShowingDeleteConfirmation:(BOOL)confirmation accessoryViewBounds:(CGRect)bounds;
@end

