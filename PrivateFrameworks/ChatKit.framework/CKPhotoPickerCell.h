/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerCell : UICollectionViewCell <ISPlayerViewDelegate> {
    ISPlayerView *__irisPlayerView;
    <CKPhotoPickerCellDelegate> *_delegate;
    UIImageView *_imageView;
    CKPhotoTileBadgeView *_irisBadgeView;
    BOOL _isPhotoIris;
    BOOL _isVideo;
    PLRoundProgressView *_progressView;
    float _scrubOffset;
    UIImageView *_videoImageView;
}

@property (setter=_setIrisPlayerView:, nonatomic, retain) ISPlayerView *_irisPlayerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKPhotoPickerCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) CKPhotoTileBadgeView *irisBadgeView;
@property (nonatomic) BOOL isPhotoIris;
@property (nonatomic) BOOL isVideo;
@property (nonatomic, retain) PLRoundProgressView *progressView;
@property (nonatomic) float scrubOffset;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *videoImageView;

- (void)_badgeToggled:(id*)arg1;
- (id)_irisPlayerView;
- (void)_setIrisPlayerView:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)irisBadgeView;
- (BOOL)isPhotoIris;
- (BOOL)isVideo;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)progressView;
- (float)scrubOffset;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIrisBadgeView:(id)arg1;
- (void)setIsPhotoIris:(BOOL)arg1;
- (void)setIsVideo:(BOOL)arg1;
- (void)setProgressView:(id)arg1;
- (void)setScrubOffset:(float)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setVideoImageView:(id)arg1;
- (void)updateProgress:(double)arg1;
- (id)videoImageView;

@end
