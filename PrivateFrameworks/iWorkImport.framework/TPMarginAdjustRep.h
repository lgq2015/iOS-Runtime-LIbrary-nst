/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TPPaginatedPageInfo;

@interface TPMarginAdjustRep : TSDRep {
    double _minBottomMargin;
    double _minTopMargin;
    bool_bottomKnobEncroachingFooter;
    bool_hideKnobs;
    bool_topKnobEncroachingHeader;
}

@property bool hideKnobs;
@property double minBottomMargin;
@property double minTopMargin;
@property(readonly) TPPaginatedPageInfo * pageInfo;

- (void)addKnobsToArray:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)directlyManagesLayerContent;
- (void)dynamicallyResizingWithTracker:(id)arg1;
- (bool)hideKnobs;
- (void)hideKnobsEncroachingHeader:(double)arg1 orFooter:(double)arg2;
- (double)minBottomMargin;
- (double)minTopMargin;
- (id)pageInfo;
- (void)setHideKnobs:(bool)arg1;
- (void)setMinBottomMargin:(double)arg1;
- (void)setMinTopMargin:(double)arg1;
- (bool)shouldCreateKnobs;
- (void)updateFromLayout;
- (bool)wantsGuidesWhileResizing;

@end