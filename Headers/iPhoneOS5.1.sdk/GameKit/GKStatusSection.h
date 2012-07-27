/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableSection.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, GKBackgroundView, NSString;

@interface GKStatusSection : XXUnknownSuperclass <GKTableSection> {
@private
	BOOL _loading;
	NSString* _status;
	NSString* _info;
	NSError* _error;
	float _statusHeight;
	GKBackgroundView* _currentStatusView;
}
@property(retain, nonatomic) GKBackgroundView* currentStatusView;	// @synthesize=_currentStatusView
@property(retain, nonatomic) NSError* error;	// @synthesize=_error
@property(retain, nonatomic) NSString* info;	// @synthesize=_info
@property(assign, nonatomic, getter=isLoading) BOOL loading;	// @synthesize=_loading
@property(retain, nonatomic) NSString* status;	// @synthesize=_status
@property(assign, nonatomic) float statusHeight;	// @synthesize=_statusHeight
-(id)init;
// declared property getter: -(id)currentStatusView;
-(void)dealloc;
// declared property getter: -(id)error;
// declared property getter: -(id)info;
// declared property getter: -(BOOL)isLoading;
-(id)makeStatusView;
-(float)sectionFooterHeightInTableView:(id)tableView;
-(float)sectionHeaderHeightInTableView:(id)tableView;
-(id)sectionHeaderViewInTableView:(id)tableView;
-(int)sectionRowCountInTableView:(id)tableView;
// declared property setter: -(void)setCurrentStatusView:(id)view;
// declared property setter: -(void)setError:(id)error;
// declared property setter: -(void)setInfo:(id)info;
// declared property setter: -(void)setLoading:(BOOL)loading;
// declared property setter: -(void)setStatus:(id)status;
// declared property setter: -(void)setStatusHeight:(float)height;
// declared property getter: -(id)status;
// declared property getter: -(float)statusHeight;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfColumnsForRow:(int)row;
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
-(id)tableView:(id)view reuseIdentifierForRow:(int)row;
@end
