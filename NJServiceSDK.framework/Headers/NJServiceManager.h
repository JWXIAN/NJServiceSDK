//
//  NJServiceManager.h
//  NJServiceSDK
//
//  Created by guojingwei on 2023/10/20.
//

#import <Foundation/Foundation.h>
#import <NJServiceSDK/NJServiceConfig.h>

@interface NJServiceManager : NSObject

/**
 初始化 SDK
 */
+ (instancetype)sharedInstance;

/**
 加载悬浮窗
 @param config  悬浮窗配置
 @param click  点击悬浮窗回调
 @param received 接收到的数据
*/
- (void)show:(NJServiceConfig *)config
       click:(void (^)(void))click
    received:(void (^)(NSString *data))received;

/**
 是否隐藏悬浮窗
 @param isHidden  YES 显示，NO隐藏
 */
- (BOOL)hide:(BOOL)isHidden;

/**
 修改是否可拖动
 @param drag  YES 拖动，NO不可拖动
 */
- (BOOL)setIsDrag:(BOOL)drag;

/**
 修改拖动范围
 @param rect  拖动范围，不能超过主视图范围
 */
- (BOOL)setDragRect:(CGRect)rect;

/**
 修改是否可贴边
 @param bounds  YES 自动贴边，NO不能贴边
 */
- (BOOL)setAutoBounds:(BOOL)bounds;


- (void)frontView:(NSString *)obj;
@end
