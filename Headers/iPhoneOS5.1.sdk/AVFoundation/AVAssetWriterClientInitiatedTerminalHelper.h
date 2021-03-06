/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterTerminalHelper.h"


@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
@private
	int _terminalStatus;
}
-(id)initWithConfigurationState:(id)configurationState;
-(id)initWithConfigurationState:(id)configurationState terminalStatus:(int)status;
-(void)cancelWriting;
-(int)status;
@end

