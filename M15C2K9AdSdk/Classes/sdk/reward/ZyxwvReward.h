//
//  ZyxwvReward.h
//  ZyxwvAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZyxwvRequest;
@protocol ZyxwvRewardAdDelegate <NSObject>

@required

-(void) onRewardReceived:(NSString *_Nonnull) transId;

@optional
-(void) onRewardLoadSucceeded:(NSString *) pid;
-(void) onRewardLoadFailure:(NSString *) pid error:(NSError *)error;
-(void) onRewardPlayStarted;
-(void) onRewardPlayEnded;
-(void) onRewardTapped;
-(void) onRewardClosed;
-(void) onRewardSkipped;
-(void) onRewardPlayError:(NSString *) pid error:(NSError *)error;

@end

@interface ZyxwvReward : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<ZyxwvRewardAdDelegate> delegate;

- (instancetype)initWithRequest:(ZyxwvRequest *)request;
- (BOOL)adIsReady;
- (void)loadAd;
- (void)showAd:(UIViewController *)rootViewController options:(NSDictionary<NSString *, NSString *> * _Nullable)options;
@end

