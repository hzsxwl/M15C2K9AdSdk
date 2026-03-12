//
//  ZyxwvNativeAdView.h
//  ZyxwvAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZyxwvNativeAdView;
@class ZyxwvNativeAd;
@protocol ZyxwvNativeAdViewDelegate <NSObject>
@optional
- (void)onNativeAdViewRenderSucceeded:(ZyxwvNativeAdView *)nativeAdView;
- (void)onNativeAdViewRenderFailed:(NSError *)error;
- (void)onNativeAdViewExposed;
- (void)onNativeAdViewTapped;
- (void)onNativeAdViewDisliked:(NSString *) reason;

@end
@interface ZyxwvNativeAdView : NSObject
+ (instancetype) createAdView;

@property(nonatomic) CGRect frame;
@property (nonatomic, weak) id<ZyxwvNativeAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;
- (void)updateData:(ZyxwvNativeAd *)nativeAd;
- (UIView *)adView;
@end
