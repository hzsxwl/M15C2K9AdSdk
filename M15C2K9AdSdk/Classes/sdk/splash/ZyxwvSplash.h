#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZyxwvRequest;
@protocol ZyxwvSplashAdDelegate <NSObject>
@optional
-(void) onSplashShow;
-(void) onSplashFailToShow:(NSString *) pid error:(NSError *)error;
-(void) onSplashLoadSuccess:(NSString *) pid;
-(void) onSplashLoadError:(NSString *) pid error:(NSError *)error;
-(void) onSplashClicked;
-(void) onSplashClosed;
-(void) onSplashSkiped;

@end

@interface ZyxwvSplash : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<ZyxwvSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithRequest:(ZyxwvRequest *)request
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithRequest:(ZyxwvRequest *)request;
- (BOOL)adIsReady;
-(void)loadAdAndShow;
- (void)loadAd;
- (void)showAd:(UIWindow *)window;
@end
