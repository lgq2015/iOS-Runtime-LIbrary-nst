/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPlaylist, MPMediaQuery, NSArray, NSString;

@interface MPGeniusMix : NSObject <SSDownloadManagerObserver, NSCoding, NSCopying> {
    MPMediaPlaylist *_playlist;
    NSArray *_representativeArtists;
    NSArray *_representativeImageItems;
    MPMediaQuery *_seedTracksQuery;
}

@property(readonly) float downloadProgress;
@property(readonly) BOOL isCloudMix;
@property(readonly) BOOL isDownloading;
@property(readonly) NSString * name;
@property(readonly) MPMediaPlaylist * playlist;
@property(readonly) NSArray * representativeArtists;
@property(readonly) MPMediaQuery * seedTracksQuery;

+ (id)artworkCacheDirectoryPath;
+ (id)artworkImageForMediaItem:(id)arg1;

- (id)_cacheDirectoryPath;
- (id)_cachedRepresentativeImagePath;
- (unsigned long long)_entityArtworkCacheHashForRepresentativeItems:(id)arg1;
- (id)_representativeImageItemsWithMaxCount:(unsigned int)arg1;
- (BOOL)canPlayUsingNetworkType:(int)arg1;
- (void)cancelDownload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countOfRepresentativeImagesWithMaxCount:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadMixWithCompletionHandler:(id)arg1;
- (float)downloadProgress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMPMediaPlaylist:(id)arg1;
- (BOOL)isCloudMix;
- (BOOL)isDownloading;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)playlist;
- (id)representativeArtists;
- (struct CGImage { }*)representativeImageWithSize:(struct CGSize { float x1; float x2; })arg1 count:(unsigned int)arg2 cacheOnly:(BOOL)arg3;
- (struct CGImage { }*)representativeImageWithSize:(struct CGSize { float x1; float x2; })arg1 count:(unsigned int)arg2;
- (id)seedTracksQuery;

@end