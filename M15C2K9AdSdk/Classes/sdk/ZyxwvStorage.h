//
//  ZyxwvStorage.h
//  ZyxwvAdsSdk-iOS
//
//
#import "ZyxwvDto.h"
#import <Foundation/Foundation.h>

@interface ZyxwvStorage : NSObject
@property (nonatomic) int zCps;
+(instancetype) sharedInstance;
-(void) addStrategyData:(NSString *)adsId adData:(ZyxwvDto *) zyxwvDto;
-(ZyxwvDto *) getStrategyData: (NSString *)adsId;
@end

