/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Accounts-Structs.h"

@class NSMutableDictionary, NSURL, ACAccountCredential, NSMutableSet, NSSet, NSDictionary, NSDate, NSString, ACAccountStore, ACAccountType, NSArray;

@interface ACAccount : XXUnknownSuperclass {
@private
	ACAccountStore* _store;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _password;
	NSString* _authToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	BOOL _accountAccessAvailable;
	BOOL _authenticated;
	NSURL* _objectID;
	NSDate* _date;
	ACAccount* _parentAccount;
	NSURL* _parentAccountObjectID;
	NSArray* _childAccounts;
	NSMutableSet* _enabledDataclasses;
	NSMutableSet* _provisionedDataclasses;
}
@property(copy, nonatomic) NSString* accountDescription;
@property(readonly, assign, nonatomic) NSDictionary* accountProperties;
@property(retain, nonatomic) ACAccountType* accountType;
@property(assign, nonatomic) BOOL authenticated;
@property(readonly, assign, nonatomic) NSArray* childAccounts;
@property(retain, nonatomic) ACAccountCredential* credential;
@property(readonly, assign, nonatomic) NSDictionary* dataclassProperties;
@property(readonly, assign, nonatomic) NSDate* date;
@property(retain, nonatomic) NSMutableSet* enabledDataclasses;
@property(readonly, assign, nonatomic) NSString* identifier;
@property(copy, nonatomic) NSURL* objectID;
@property(retain, nonatomic) ACAccount* parentAccount;
@property(readonly, assign, nonatomic) NSURL* parentAccountObjectID;
@property(retain, nonatomic) NSSet* provisionedDataclasses;
@property(copy, nonatomic) NSString* username;
+(id)_createNewAccountUID;
-(id)initWithAccountType:(id)accountType;
-(id)initWithCoder:(id)coder;
// declared property getter: -(id)accountDescription;
// declared property getter: -(id)accountProperties;
-(id)accountPropertyForKey:(id)key;
// declared property getter: -(id)accountType;
// declared property getter: -(BOOL)authenticated;
// declared property getter: -(id)childAccounts;
// declared property getter: -(id)credential;
// declared property getter: -(id)dataclassProperties;
// declared property getter: -(id)date;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)enabledDataclasses;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)identifier;
-(BOOL)isEnabledForDataclass:(NSString*)dataclass;
-(BOOL)isProvisionedForDataclass:(NSString*)dataclass;
// declared property getter: -(id)objectID;
-(id)owningBundleID;
// declared property getter: -(id)parentAccount;
// declared property getter: -(id)parentAccountObjectID;
-(id)propertiesForDataclass:(NSString*)dataclass;
// declared property getter: -(id)provisionedDataclasses;
-(void)reload;
// declared property setter: -(void)setAccountDescription:(id)description;
-(void)setAccountProperties:(id)properties;
-(void)setAccountProperty:(id)property forKey:(id)key;
-(void)setAccountStore:(id)store;
// declared property setter: -(void)setAccountType:(id)type;
// declared property setter: -(void)setAuthenticated:(BOOL)authenticated;
// declared property setter: -(void)setCredential:(id)credential;
-(void)setDataclassProperties:(id)properties;
-(void)setDate:(id)date;
-(void)setEnabled:(BOOL)enabled forDataclass:(NSString*)dataclass;
// declared property setter: -(void)setEnabledDataclasses:(id)dataclasses;
-(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setObjectID:(id)anId;
-(void)setOwningBundleID:(id)anId;
// declared property setter: -(void)setParentAccount:(id)account;
-(void)setProperties:(id)properties forDataclass:(NSString*)dataclass;
// declared property setter: -(void)setProvisionedDataclasses:(id)dataclasses;
// declared property setter: -(void)setUsername:(id)username;
// declared property getter: -(id)username;
@end

