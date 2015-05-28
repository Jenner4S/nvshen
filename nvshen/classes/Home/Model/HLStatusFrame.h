//
//  HLStatusFrame.h
//  nvshen
//
//  Created by hoolang on 15/5/28.
//  Copyright (c) 2015年 Hoolang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HLStatus;
// 昵称字体
#define HLStatusCellNameFont [UIFont systemFontOfSize:15]
// 时间字体
#define HLStatusCellTimeFont [UIFont systemFontOfSize:12]
// 来源字体
#define HLStatusCellSourceFont HLStatusCellTimeFont
// 正文字体
#define HLStatusCellContentFont [UIFont systemFontOfSize:14]

// 被转发微博的正文字体
#define HLStatusCellRetweetContentFont [UIFont systemFontOfSize:13]

// cell之间的间距
#define HLStatusCellMargin 15
#define HLStatusCellBorderW 10
@interface HLStatusFrame : NSObject
@property (nonatomic, strong) HLStatus *status;

/** Show整体 */
@property (nonatomic, assign) CGRect originalViewF;
/** 头像 */
@property (nonatomic, assign) CGRect iconViewF;
/** 会员图标 */
@property (nonatomic, assign) CGRect vipViewF;
/** 配图 */
@property (nonatomic, assign) CGRect photosViewF;
/** 昵称 */
@property (nonatomic, assign) CGRect nameLabelF;
/** 时间 */
@property (nonatomic, assign) CGRect timeLabelF;

/** 正文 */
@property (nonatomic, assign) CGRect contentLabelF;



/** 底部工具条 */
@property (nonatomic, assign) CGRect toolbarF;

/** cell的高度 */
@property (nonatomic, assign) CGFloat cellHeight;
@end
