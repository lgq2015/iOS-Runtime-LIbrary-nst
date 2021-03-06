/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUPrivacyManager : NSObject

+ (id)sharedPrivacyManager;

- (void)_handleBlockListChanged:(id)arg1;
- (void)addRule:(id)arg1;
- (id)allBlacklistRules;
- (void)dealloc;
- (id)init;
- (BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)arg1;
- (BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1;
- (void)removeRule:(id)arg1;
- (void)setBlockIncomingCommunication:(BOOL)arg1 forEmailAddress:(id)arg2;
- (void)setBlockIncomingCommunication:(BOOL)arg1 forPhoneNumber:(id)arg2;

@end
