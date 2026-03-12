//
//  ZyxwvInterstitial.h
//  ZyxwvAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZyxwvRequest;
@protocol ZyxwvInterstitialAdDelegate <NSObject>
@optional
-(void) onInterstitialLoadSucceeded:(NSString *) pid;
-(void) onInterstitialLoadFailure:(NSString *) pid error:(NSError *)error;
-(void) onInterstitialPlayStarted;
-(void) onInterstitialPlayEnded;
-(void) onInterstitialTapped;
-(void) onInterstitialClosed;
-(void) onInterstitialSkipped;

@end

@interface ZyxwvInterstitial : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<ZyxwvInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(ZyxwvRequest *)request;
- (BOOL)adIsReady;
- (void)loadAd;
- (void)showAd:(UIViewController *)rootViewController;
@end
