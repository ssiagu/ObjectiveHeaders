/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ABGroupWrapper, ABPersonViewControllerHelper;
@protocol ABStyleProvider, ABNewPersonViewControllerDelegate;

@interface ABNewPersonViewController : XXUnknownSuperclass {
@private
	id<ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
	id _parentGroup;
	id _helper;
	void* _recordForNewPerson;
}
@property(assign, nonatomic) void* addressBook;
@property(assign, nonatomic) void* displayedPerson;
@property(readonly, assign, nonatomic) ABPersonViewControllerHelper* helper;
@property(assign, nonatomic) id<ABNewPersonViewControllerDelegate> newPersonViewDelegate;
@property(assign, nonatomic) void* parentGroup;
@property(retain, nonatomic) ABGroupWrapper* parentGroupWrapper;
@property(readonly, assign, nonatomic) void* recordForNewPerson;
@property(assign, nonatomic) BOOL savesNewContactOnSuspend;
@property(assign, nonatomic) BOOL showsCancelButton;
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;
-(id)init;
-(id)initWithNibName:(id)nibName bundle:(id)bundle style:(int)style;
-(id)initWithStyle:(int)style;
-(BOOL)_allowsAutorotation;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(int)abViewControllerType;
-(float)ab_heightToFitForViewInPopoverView;
// declared property getter: -(void*)addressBook;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
-(void)applicationWillTerminate:(id)application;
-(void)attemptSaveAndTellDelegate:(BOOL)delegate;
-(void)cancel:(id)cancel;
-(void)dealloc;
// declared property getter: -(void*)displayedPerson;
// declared property getter: -(id)helper;
-(void)loadView;
// declared property getter: -(id)newPersonViewDelegate;
// declared property getter: -(void*)parentGroup;
// declared property getter: -(id)parentGroupWrapper;
// declared property getter: -(void*)recordForNewPerson;
-(void)save:(id)save;
-(void)saveAndTellDelegate:(BOOL)delegate;
-(void)savePerson:(void*)person;
// declared property getter: -(BOOL)savesNewContactOnSuspend;
// declared property setter: -(void)setAddressBook:(void*)book;
// declared property setter: -(void)setDisplayedPerson:(void*)person;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
// declared property setter: -(void)setNewPersonViewDelegate:(id)delegate;
// declared property setter: -(void)setParentGroup:(void*)group;
// declared property setter: -(void)setParentGroupWrapper:(id)wrapper;
// declared property setter: -(void)setSavesNewContactOnSuspend:(BOOL)suspend;
// declared property setter: -(void)setShowsCancelButton:(BOOL)button;
// declared property setter: -(void)setStyleProvider:(id)provider;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(BOOL)showsCancelButton;
// declared property getter: -(id)styleProvider;
-(void)updateNavigationButtons;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

