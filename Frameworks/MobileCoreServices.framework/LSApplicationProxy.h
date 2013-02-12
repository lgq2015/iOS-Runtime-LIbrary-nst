/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class LSApplicationProxy, NSArray, NSString;

@interface LSApplicationProxy : LSResourceProxy {
    unsigned int _flags;
    NSArray *_privateDocumentIconNames;
    LSApplicationProxy *_privateDocumentTypeOwner;
}

@property(readonly) NSString * applicationIdentifier;
@property(readonly) NSString * roleIdentifier;

+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1;

- (struct CGSize { float x1; float x2; })_defaultStyleSize:(id)arg1;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;
- (id)_initWithApplicationIdentifier:(id)arg1 name:(id)arg2 containerURL:(id)arg3 resourcesDirectoryURL:(id)arg4 iconsDictionary:(id)arg5 iconFileNames:(id)arg6 iconIsPrerendered:(BOOL)arg7;
- (id)applicationIdentifier;
- (id)containerURL;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)iconStyleDomain;
- (BOOL)isEqual:(id)arg1;
- (id)localizedName;
- (BOOL)privateDocumentIconAllowOverride;
- (id)privateDocumentIconNames;
- (id)privateDocumentTypeOwner;
- (id)resourcesDirectoryURL;
- (id)roleIdentifier;
- (void)setPrivateDocumentIconAllowOverride:(BOOL)arg1;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (void)setPrivateDocumentTypeOwner:(id)arg1;

@end