//
//  Pull2RefreshView.h
//  上拉刷新下拉加载
//
//  Created by 纵昂 on 2017/2/13.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum
{
    kPull2RefreshViewTypeHeader,
    kPull2RefreshViewTypeFooter
}Pull2RefreshViewType;

typedef enum
{
    kPull2RefreshViewStateDragToRefresh,      //下拉可以刷新
    kPull2RefreshViewStateLooseToRefresh,     //松开立即刷新
    kPull2RefreshViewStateRefreshing          //加载中...
}Pull2RefreshViewState;

@interface Pull2RefreshView : UIView

@property (nonatomic, assign) Pull2RefreshViewState state;

- (id)initWithFrame:(CGRect)frame type:(Pull2RefreshViewType)type;

- (void)flipImageAnimated:(BOOL)animated;
- (void)setCurrentDate;



@end
