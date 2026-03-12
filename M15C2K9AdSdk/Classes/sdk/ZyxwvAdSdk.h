//
//  ZyxwvAdSdk.h
//  ZyxwvAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, ZyxwvAcceptStatus) {
    ZyxwvUnknown = 0,
    ZyxwvAccepted,
    ZyxwvDenied,
};

@interface ZyxwvAdSdk : NSObject
+(instancetype) sharedInstance;
-(void)initializeWithAppId:(NSString *)appId;
-(void)enableDebugMode:(BOOL)enable;
-(void)updateGDPRStatus:(ZyxwvAcceptStatus)status;
-(void)beginAdPreload:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end

