/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSData, NSString, GKPlayer;

@interface GKReconnectInvitationSendRequest : GKDataRequest  {
    GKPlayer *_player;
    NSString *_message;
    NSData *_connectionData;
    NSData *_sessionToken;
    NSData *_pushToken;
}

@property(retain) GKPlayer * player;
@property(retain) NSString * message;
@property(retain) NSData * connectionData;
@property(retain) NSData * sessionToken;
@property(retain) NSData * pushToken;


- (id)header;
- (void)setPushToken:(id)arg1;
- (id)pushToken;
- (void)setSessionToken:(id)arg1;
- (id)sessionToken;
- (void)setPlayer:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)key;
- (id)request;
- (id)player;
- (id)connectionData;
- (void)setConnectionData:(id)arg1;
- (void)dealloc;

@end