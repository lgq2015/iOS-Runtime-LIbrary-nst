/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksPreferences : NSObject {
    BOOL _changeColorSwapped;
}

@property(getter=isChangeColorSwapped,readonly) BOOL changeColorSwapped;

+ (id)sharedPreferences;

- (void)dealloc;
- (id)init;
- (BOOL)isChangeColorSwapped;
- (void)resetLocale;

@end