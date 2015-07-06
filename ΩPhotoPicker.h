//
//  _PhotoPicker.h
//  ΩPhotoPicker
//
//  Created by guohao on 15/7/3.
//  Copyright (c) 2015年 guohao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@import Photos;
typedef void (^onOkBlock)(NSArray* assets);
typedef void (^onCancelBlock)(void);

@interface ΩPhotoPicker : NSObject{
    onCancelBlock cblock;
    onOkBlock oblock;
}

@property (nonatomic,strong)UIViewController* viewcontroller;
- (instancetype)initWithViewController:(UIViewController*)vc
onOK:(onOkBlock)okblock
onCancel:(onCancelBlock)cancelblock;
- (void)show;
@end
