/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableArray, NSSet, NSString, SSRequest;

@interface SSDevice : NSObject <SSRequestDelegate> {
    int _deviceType;
    struct dispatch_queue_s { } *_dispatchQueue;
    NSMutableArray *_loadStoreFrontHandlers;
    SSRequest *_loadStoreFrontRequest;
    NSString *_localStoreFrontIdentifier;
    BOOL _localStoreFrontIsTransient;
    id _mediaLibraryIdentifier;
    NSString *_productType;
    NSString *_productVersion;
    NSMutableArray *_simpleRequests;
    id _softwareLibraryIdentifier;
    NSString *_synchedStoreFrontIdentifier;
}

@property(readonly) NSSet * automaticDownloadKinds;
@property(readonly) int deviceType;
@property(copy) NSString * mediaLibraryIdentifier;
@property(readonly) NSString * productType;
@property(readonly) NSString * productVersion;
@property(copy) NSString * softwareLibraryIdentifier;
@property(readonly) NSString * storeFrontIdentifier;
@property(getter=isStoreFrontIdentifierTransient,readonly) BOOL storeFrontIdentifierTransient;
@property(readonly) NSString * synchedStoreFrontIdentifier;
@property(readonly) NSString * userAgentDeviceIdentifier;

+ (id)copyCachedAvailableItemKinds;
+ (id)currentDevice;
+ (BOOL)promptNeedsDisplay:(id)arg1;
+ (BOOL)setCachedAvailableItemKinds:(id)arg1;
+ (void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2;
+ (void)setPromptWithIdentifier:(id)arg1 needsDisplay:(BOOL)arg2;

- (void)_cleanupSimpleRequest:(id)arg1;
- (id)_copyGSCapabilityValueForKey:(struct __CFString { }*)arg1;
- (id)_copyProductType;
- (int)_deviceType;
- (void)_finishRequestWithError:(id)arg1;
- (void)_invalidateSoftwareCUID;
- (BOOL)_is1080pCapable;
- (BOOL)_is720pCapable;
- (void)_postStoreFrontDidChangeNotification;
- (void)_reloadAfterStoreFrontChange;
- (void)_reloadStoreFrontIdentifier;
- (void)_setLocalStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (BOOL)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)_trackSimpleRequest:(id)arg1;
- (void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(id)arg3;
- (id)automaticDownloadKinds;
- (id)copyStoreFrontRequestHeaders;
- (void)dealloc;
- (int)deviceType;
- (void)getAvailableItemKindsWithBlock:(id)arg1;
- (id)init;
- (BOOL)isStoreFrontIdentifierTransient;
- (void)loadStoreFrontWithCompletionHandler:(id)arg1;
- (id)mediaLibraryIdentifier;
- (void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (id)productType;
- (id)productVersion;
- (void)reloadStoreFrontIdentifier;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)resetStoreFrontForSignOut;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (void)setMediaLibraryIdentifier:(id)arg1;
- (void)setSoftwareLibraryIdentifier:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)setStoreFrontIdentifierWithInfo:(id)arg1;
- (void)setStoreFrontWithResponseHeaders:(id)arg1;
- (void)showPromptWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (id)softwareLibraryIdentifier;
- (id)storeFrontIdentifier;
- (BOOL)supportsDeviceCapability:(int)arg1;
- (id)synchedStoreFrontIdentifier;
- (void)synchronizeAutomaticDownloadKinds;
- (void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (id)userAgentDeviceIdentifier;

@end