/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;



@interface GKGetPlayersToInviteDataRequest : GKDataRequest 
{
    NSArray *_players;
}

@property(readonly) NSArray *players;


- (id)key;
- (id)request;
- (void)dealloc;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)players;

@end