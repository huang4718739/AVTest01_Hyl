//
//  AACEncoder.h
//  HYL_LIVE_AV
//
//  Created by cc on 2016/10/19.
//  Copyright © 2016年 Hyl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface AACEncoder : NSObject

@property (nonatomic) dispatch_queue_t encoderQueue;
@property (nonatomic) dispatch_queue_t callbackQueue;

- (void) encodeSampleBuffer:(CMSampleBufferRef)sampleBuffer completionBlock:(void (^)(NSData *encodedData, NSError* error))completionBlock;


@end
