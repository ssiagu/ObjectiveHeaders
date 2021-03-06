/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol GKVoiceChatClient;

@interface GKVoiceChatService : XXUnknownSuperclass {
@private
	id _voiceChatService;
}
@property(assign) id<GKVoiceChatClient> client;
@property(readonly, assign) float inputMeterLevel;
@property(assign, nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(assign, nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(readonly, assign) float outputMeterLevel;
@property(assign, nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(assign, nonatomic) float remoteParticipantVolume;
+(id)defaultVoiceChatService;
+(void)initialize;
+(BOOL)isVoIPAllowed;
-(BOOL)acceptCallID:(int)anId error:(id*)error;
// declared property getter: -(id)client;
-(void)dealloc;
-(void)denyCallID:(int)anId;
// declared property getter: -(float)inputMeterLevel;
// declared property getter: -(BOOL)isInputMeteringEnabled;
// declared property getter: -(BOOL)isMicrophoneMuted;
// declared property getter: -(BOOL)isOutputMeteringEnabled;
// declared property getter: -(float)outputMeterLevel;
-(void)receivedData:(id)data fromParticipantID:(id)participantID;
-(void)receivedRealTimeData:(id)data fromParticipantID:(id)participantID;
// declared property getter: -(float)remoteParticipantVolume;
// declared property setter: -(void)setClient:(id)client;
// declared property setter: -(void)setInputMeteringEnabled:(BOOL)enabled;
// declared property setter: -(void)setMicrophoneMuted:(BOOL)muted;
// declared property setter: -(void)setOutputMeteringEnabled:(BOOL)enabled;
// declared property setter: -(void)setRemoteParticipantVolume:(float)volume;
-(BOOL)startVoiceChatWithParticipantID:(id)participantID error:(id*)error;
-(void)stopVoiceChatWithParticipantID:(id)participantID;
@end

