/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>
#import <LayerKit/LKTimingFunction.h>

@interface LKAnimation : NSObject <NSCopying> {}

+ (id)animation;
+ (id)defaultValueForKey:(id)key;
+ (id)properties;
- (void)runActionForKey:(id)key object:(id)object arguments:(id)fp16;
- (BOOL)shouldArchiveValueForKey:(id)key;

- (BOOL)autoreverses;
- (void)setAutoreverses:(BOOL)autoreverses;

- (double)beginTime;
- (void)setBeginTime:(double)beginTime;

- (id)delegate;
- (void)setDelegate:(id)delegate;

- (double)duration;
- (void)setDuration:(float)duration;

- (id)fillMode;
- (void)setFillMode:(id)fillMode;

- (double)frameInterval;
- (void)setFrameInterval:(double)frameInterval;

- (BOOL)removedOnCompletion;
- (void)setRemovedOnCompletion:(BOOL)removedOnCompletion;

- (float)repeatCount;
- (void)setRepeatCount:(float)repeatCount;

- (double)repeatDuration;
- (void)setRepeatDuration:(double)repeatDuration;

- (float)speed;
- (void)setSpeed:(float)speed;

- (double)timeOffset;
- (void)setTimeOffset:(double)timeOffset;

- (LKTimingFunction *)timingFunction;
- (void)setTimingFunction:(LKTimingFunction *)timingFunction;

@end

@interface LKAnimation (LKAnimationPrivate)

+ (void *)methodForSelector:(SEL)fp8;
+ (BOOL)shouldCopyValueForKey:(id)fp8;
+ (BOOL)shouldRetainValueForKey:(id)fp8;

@end