/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ABCardContentPluginManager : XXUnknownSuperclass {
@private
	NSString* _pluginsDirectory;
}
@property(readonly, assign, nonatomic) NSString* pluginsDirectory;	// @synthesize=_pluginsDirectory
-(id)bundleNameForLabel:(id)label;
-(Class)contentProviderClassForPerson:(void*)person;
-(Class)contentProviderForBundleName:(id)bundleName;
-(void)dealloc;
// declared property getter: -(id)pluginsDirectory;
@end

