/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEventAttachmentCellControllerDelegate.h"
#import "EventKitUI-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "EKEditItemViewController.h"

@class NSArray, UITableView;
@protocol EKEventAttachmentEditViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate> {
@private
	UITableView* _table;
	NSArray* _cellControllers;
	id<EKEventAttachmentEditViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<EKEventAttachmentEditViewControllerDelegate> delegate;	// @synthesize=_delegate
-(id)initWithFrame:(CGRect)frame attachments:(id)attachments;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)loadView;
-(id)owningEventForAttachmentCellController:(id)attachmentCellController;
-(id)parentViewControllerForAttachmentCellController:(id)attachmentCellController;
// declared property setter: -(void)setDelegate:(id)delegate;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidLoad;
-(void)viewDidUnload;
@end

