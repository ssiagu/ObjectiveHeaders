/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GKTableSection.h"

@class NSMutableDictionary, NSMutableArray, NSString;

@interface GKTurnBasedMatchesSection : XXUnknownSuperclass <GKTableSection> {
@private
	NSMutableArray* _matches;
	NSString* _sectionTitle;
	NSString* _deleteConfirmTitle;
	NSMutableDictionary* _players;
	unsigned _sectionStyle;
}
@property(retain, nonatomic) NSString* deleteConfirmTitle;	// @synthesize=_deleteConfirmTitle
@property(retain, nonatomic) NSMutableArray* matches;	// @synthesize=_matches
@property(retain, nonatomic) NSMutableDictionary* players;	// @synthesize=_players
@property(assign, nonatomic) unsigned sectionStyle;	// @synthesize=_sectionStyle
@property(retain, nonatomic) NSString* sectionTitle;	// @synthesize=_sectionTitle
-(id)init;
-(XXStruct_nF0CnD)currentMetricsInTableView:(id)tableView;
-(void)dealloc;
// declared property getter: -(id)deleteConfirmTitle;
-(id)description;
-(float)heightForHeaderInTableView:(id)tableView;
// declared property getter: -(id)matches;
-(id)playerForMatch:(id)match sectionStyle:(unsigned)style;
// declared property getter: -(id)players;
-(int)rowCountInTableView:(id)tableView;
// declared property getter: -(unsigned)sectionStyle;
-(id)sectionStyleString;
// declared property getter: -(id)sectionTitle;
// declared property setter: -(void)setDeleteConfirmTitle:(id)title;
// declared property setter: -(void)setMatches:(id)matches;
// declared property setter: -(void)setPlayers:(id)players;
// declared property setter: -(void)setSectionStyle:(unsigned)style;
// declared property setter: -(void)setSectionTitle:(id)title;
-(void)showDetail:(id)detail;
-(id)swipeDeleteConfirmTitleInTableView:(id)tableView;
-(void)tableView:(id)view didSelectIndexPath:(id)path;
-(void)tableView:(id)view didSwipeToDeleteRow:(id)deleteRow;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view loadAdditionalDataForSection:(int)section rows:(id)rows thenUpdateView:(id)view4;
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
-(id)tableView:(id)view reuseIdentifierForRow:(int)row;
-(void)tableView:(id)view showDetailForIndexPath:(id)indexPath;
-(id)titleForHeaderInTableView:(id)tableView;
@end

