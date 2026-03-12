//
//  ZyxwvNativeAdManager.h
//  ZyxwvAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZyxwvRequest;
@class ZyxwvNativeAd;
@class ZyxwvNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol ZyxwvNativeAdManagerDelegate <NSObject>

@optional
- (void)onNativeAdsManagerLoadSucceeded:(ZyxwvNativeAdManager *)nativeAdsManager;
- (void)onNativeAdsManagerLoadFailed:(NSError *)error;

@end


@interface ZyxwvNativeAdManager : NSObject

@property (nonatomic, weak) id<ZyxwvNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(ZyxwvRequest *)request;

- (void)loadAdData:(NSInteger)count;

- (NSArray<ZyxwvNativeAd *> * _Nullable)getNativeAds;

@end

NS_ASSUME_NONNULL_END
