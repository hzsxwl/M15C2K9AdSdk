//
//  ZyxwvNativeAd.h
//  ZyxwvAdsSdk-iOS
//
//


#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface ZyxwvNativeAd : NSObject
- (instancetype)initWithAd:(WindMillNativeAd *) ad;
- (WindMillNativeAd *)getAd;
@end

