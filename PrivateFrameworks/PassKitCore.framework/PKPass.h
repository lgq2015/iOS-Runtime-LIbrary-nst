/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {
    NSSet *_associatedPassTypeIdentifiers;
    NSString *_deviceName;
    NSSet *_embeddedBeacons;
    NSSet *_embeddedLocations;
    NSDate *_expirationDate;
    NSString *_groupingID;
    BOOL _hasStoredValue;
    NSString *_iAdReportingIdentifier;
    NSDate *_ingestedDate;
    NSURL *_localLocationsURL;
    NSDate *_modifiedDate;
    PKNFCPayload *_nfcPayload;
    NSString *_organizationName;
    PKImage *_partialFrontFaceImagePlaceholder;
    NSString *_passLibraryMachServiceName;
    unsigned int _passType;
    NSString *_passTypeIdentifier;
    NSURL *_passURL;
    NSDate *_relevantDate;
    BOOL _remotePass;
    BOOL _revoked;
    NSNumber *_sequenceCounter;
    NSString *_serialNumber;
    int _sharingMethod;
    NSString *_sharingText;
    NSURL *_sharingURL;
    NSString *_teamID;
    NSDictionary *_userInfo;
    BOOL _voided;
    NSURL *_webLocationsURL;
}

@property (nonatomic, readonly) NSURL *appLaunchURL;
@property (nonatomic, copy) NSSet *associatedPassTypeIdentifiers;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, readonly) PKImage *backFaceImage;
@property (nonatomic, readonly) NSArray *backFieldBuckets;
@property (nonatomic, readonly) PKBarcode *barcode;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) PKPassDisplayProfile *displayProfile;
@property (nonatomic, copy) NSSet *embeddedBeacons;
@property (nonatomic, copy) NSSet *embeddedLocations;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) PKImage *footerImage;
@property (nonatomic, readonly) PKImage *frontFaceImage;
@property (nonatomic, readonly) NSArray *frontFieldBuckets;
@property (nonatomic, copy) NSString *groupingID;
@property (readonly) BOOL hasLogoImageSet;
@property (nonatomic) BOOL hasStoredValue;
@property (setter=setiAdReportingIdentifier:, nonatomic, copy) NSString *iAdReportingIdentifier;
@property (nonatomic, readonly, copy) UIImage *icon;
@property (nonatomic, readonly) PKImage *iconImage;
@property (nonatomic, retain) NSDate *ingestedDate;
@property (nonatomic, copy) NSURL *localLocationsURL;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } logoRect;
@property (nonatomic, readonly) NSString *logoText;
@property (nonatomic, readonly) NSString *lowercaseLocalizedName;
@property (nonatomic, retain) NSDate *modifiedDate;
@property (setter=setNFCPayload:, nonatomic, copy) PKNFCPayload *nfcPayload;
@property (getter=isNFCPayloadEncrypted, nonatomic, readonly) BOOL nfcPayloadEncrypted;
@property (readonly) NSData *npkCompleteHash;
@property (readonly) BOOL npkExpired;
@property (readonly) BOOL npkHasBarcode;
@property (readonly) BOOL npkSupportsHidingBarcode;
@property (readonly) PKBarcode *npkWatchBarcode;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, readonly) PKImage *partialFrontFaceImage;
@property (nonatomic, readonly) PKImage *partialFrontFaceImagePlaceholder;
@property (nonatomic, copy) NSString *passLibraryMachServiceName;
@property (nonatomic) unsigned int passType;
@property (nonatomic, copy) NSString *passTypeIdentifier;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (nonatomic, readonly) NSString *pluralLocalizedName;
@property (nonatomic, copy) NSDate *relevantDate;
@property (getter=isRemotePass, nonatomic) BOOL remotePass;
@property (getter=isRevoked, nonatomic) BOOL revoked;
@property (nonatomic, copy) NSNumber *sequenceCounter;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) int sharingMethod;
@property (nonatomic, copy) NSString *sharingText;
@property (nonatomic, copy) NSURL *sharingURL;
@property (nonatomic, readonly) NSArray *storeIdentifiers;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } stripRect;
@property (nonatomic, readonly) int style;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } thumbnailRect;
@property (nonatomic, readonly) int transitType;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (getter=isVoided, nonatomic) BOOL voided;
@property (nonatomic, copy) NSURL *webLocationsURL;
@property (nonatomic, copy) NSURL *webServiceURL;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (Class)classForPassType:(unsigned int)arg1;
+ (unsigned int)defaultSettings;
+ (BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
+ (BOOL)supportsSecureCoding;

- (id)_changeMessageForFieldKey:(id)arg1;
- (id)_groupingIDFromPassDictionary:(id)arg1;
- (id)_localizationKeyForMultipleDiff;
- (id)appLaunchURL;
- (id)associatedPassTypeIdentifiers;
- (BOOL)availableForAutomaticPresentationUsingBeaconContext;
- (BOOL)availableForAutomaticPresentationUsingVASContext;
- (id)backFaceImage;
- (id)backFieldBuckets;
- (id)backgroundImage;
- (id)barcode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deviceName;
- (id)diff:(id)arg1;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (id)embeddedBeacons;
- (id)embeddedLocations;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)footerImage;
- (id)frontFaceImage;
- (id)frontFieldBuckets;
- (id)groupingID;
- (BOOL)hasLocationRelevancyInfo;
- (BOOL)hasStoredValue;
- (BOOL)hasTimeOrLocationRelevancyInfo;
- (BOOL)hasValidNFCPayload;
- (id)iAdReportingIdentifier;
- (id)iconImage;
- (id)ingestedDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (BOOL)isEqualToPassIncludingMetadata:(id)arg1;
- (BOOL)isExpired;
- (BOOL)isNFCPayloadEncrypted;
- (BOOL)isRelevantDateOld;
- (BOOL)isRemotePass;
- (BOOL)isRevoked;
- (BOOL)isUpdatable;
- (BOOL)isVoided;
- (id)localLocationsURL;
- (id)localizedDescription;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)localizedName;
- (id)localizedValueForFieldKey:(id)arg1;
- (id)logoImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logoRect;
- (id)logoText;
- (id)lowercaseLocalizedName;
- (id)modifiedDate;
- (id)nfcPayload;
- (id)organizationName;
- (id)partialFrontFaceImage;
- (id)partialFrontFaceImagePlaceholder;
- (id)passLibraryMachServiceName;
- (unsigned int)passType;
- (id)passTypeIdentifier;
- (id)passURL;
- (id)paymentPass;
- (id)pluralLocalizedName;
- (id)relevantDate;
- (id)sequenceCounter;
- (id)serialNumber;
- (void)setAssociatedPassTypeIdentifiers:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setEmbeddedBeacons:(id)arg1;
- (void)setEmbeddedLocations:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setGroupingID:(id)arg1;
- (void)setHasStoredValue:(BOOL)arg1;
- (void)setIngestedDate:(id)arg1;
- (void)setLocalLocationsURL:(id)arg1;
- (void)setModifiedDate:(id)arg1;
- (void)setNFCPayload:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPassLibraryMachServiceName:(id)arg1;
- (void)setPassType:(unsigned int)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setRelevantDate:(id)arg1;
- (void)setRemotePass:(BOOL)arg1;
- (void)setRevoked:(BOOL)arg1;
- (void)setSequenceCounter:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSharingMethod:(int)arg1;
- (void)setSharingText:(id)arg1;
- (void)setSharingURL:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVoided:(BOOL)arg1;
- (void)setWebLocationsURL:(id)arg1;
- (void)setiAdReportingIdentifier:(id)arg1;
- (int)sharingMethod;
- (id)sharingText;
- (id)sharingURL;
- (id)storeIdentifiers;
- (id)stripImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })stripRect;
- (int)style;
- (BOOL)supportsSharing;
- (id)teamID;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbnailRect;
- (int)transitType;
- (id)userInfo;
- (id)webLocationsURL;

// Image: /System/Library/Frameworks/PassKit.framework/PassKit

- (id)icon;
- (id)mailAttachmentIcon;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (BOOL)hasLogoImageSet;
- (id)npkArchiveData;
- (id)npkCompleteHash;
- (id)npkCompleteHashForWatchOSVersion:(unsigned int)arg1;
- (BOOL)npkExpired;
- (BOOL)npkHasBarcode;
- (BOOL)npkSupportsHidingBarcode;
- (id)npkWatchBarcode;

@end
