//
//  ViewController.h
//  HYL_LIVE_AV
//
//  Created by cc on 2016/10/19.
//  Copyright © 2016年 Hyl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "AACEncoder.h"
#import "H264Encoder.h"

@interface ViewController : UIViewController<AVCaptureVideoDataOutputSampleBufferDelegate,AVCaptureAudioDataOutputSampleBufferDelegate,H264EncoderDelegate>


@end

