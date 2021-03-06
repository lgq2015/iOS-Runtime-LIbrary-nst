/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVideoVolumeController : NSObject {
    float __targetVolume;
    double __volumeRampDuration;
    int __volumeRampRequestNumber;
    double __volumeRampStartTime;
    float __volumeRampStartValue;
    <ISVideoVolumeControllerDelegate> *_delegate;
    struct { 
        BOOL respondsToVolumeDidChange; 
    } _delegateFlags;
    AVPlayer *_player;
}

@property (setter=_setTargetVolume:, nonatomic) float _targetVolume;
@property (setter=_setVolumeRampDuration:, nonatomic) double _volumeRampDuration;
@property (setter=_setVolumeRampRequestNumber:, nonatomic) int _volumeRampRequestNumber;
@property (setter=_setVolumeRampStartTime:, nonatomic) double _volumeRampStartTime;
@property (setter=_setVolumeRampStartValue:, nonatomic) float _volumeRampStartValue;
@property (nonatomic) <ISVideoVolumeControllerDelegate> *delegate;
@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (void)_setTargetVolume:(float)arg1;
- (void)_setVolumeRampDuration:(double)arg1;
- (void)_setVolumeRampRequestNumber:(int)arg1;
- (void)_setVolumeRampStartTime:(double)arg1;
- (void)_setVolumeRampStartValue:(float)arg1;
- (float)_targetVolume;
- (void)_tickRampVolumeWithRampRequestNumber:(int)arg1;
- (double)_volumeRampDuration;
- (int)_volumeRampRequestNumber;
- (double)_volumeRampStartTime;
- (float)_volumeRampStartValue;
- (id)delegate;
- (id)initWithPlayer:(id)arg1;
- (id)player;
- (void)setDelegate:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 withRampDuration:(double)arg2;
- (float)volume;

@end
