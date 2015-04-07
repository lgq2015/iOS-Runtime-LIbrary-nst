/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@class NSArray;

@interface SPStockListComplicationData : SPComplicationData <NSSecureCoding> {
    NSArray *_stockList;
}

@property(retain) NSArray * stockList;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStockList:(id)arg1;
- (id)stockList;

@end