//
//  ZyxwvBanner.h
//  ZyxwvAdsSdk-iOS
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class ZyxwvRequest;
@class ZyxwvBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol ZyxwvBannerDelegate <NSObject>

@optional

- (void)onBannerAutoRefreshed:(ZyxwvBanner *)bannerAdView;

- (void)onBannerAutoRefreshFailure:(NSError *)error;

- (void)onBannerLoadSucceeded:(ZyxwvBanner *)bannerAdView;

- (void)onBannerLoadFailure:(NSError *)error;

- (void)onBannerDisplayed;

- (void)onBannerTapped;

- (void)onBannerWillExitApp;

- (void)onBannerWillEnterFullScreen;
- (void)onBannerDidExitFullScreen;
- (void)onBannerRemoved;
@end

@interface ZyxwvBanner : NSObject

@property (nonatomic, weak) id<ZyxwvBannerDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property(nullable, nonatomic,copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(ZyxwvRequest *)request;

- (instancetype)initWithRequest:(ZyxwvRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)loadAd;
- (BOOL)adIsReady;
- (UIView *)adView;
@end
NS_ASSUME_NONNULL_END

