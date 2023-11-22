//
//  NJServiceConfig.h
//  NJServiceSDK
//
//  Created by guojingwei on 2023/10/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 悬浮窗相关配置
 */
@interface NJServiceConfig : NSObject

/**
 悬浮窗是否可拖动，默认 YES，可拖拽
 */
@property (nonatomic, assign) BOOL isDrag;

/**
 拖动范围，默认为主视图的 frame 范围内
 */
@property (nonatomic, assign) CGRect dragRect;

/**
 保持在主视图边界，默认为YES，自动贴边
 */
@property (nonatomic, assign) BOOL autoBounds;

@end
