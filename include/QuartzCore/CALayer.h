/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>
#import <QuartzCore/CATransform.h>

@interface CALayer : NSObject <NSCoding> {}

+ (id)layer;
- (id)initWithBounds:(CGRect)bounds;

+ (id)defaultActionForKey:(id)key;
+ (id)defaultValueForKey:(id)key;
+ (id)properties;
- (id)actionForKey:(id)key;
- (BOOL)shouldArchiveValueForKey:(id)key;

- (CGSize)preferredFrameSize;

- (id)hitTest:(CGPoint)point;
- (BOOL)containsPoint:(CGPoint)point;
- (CGPoint)convertPoint:(CGPoint)point fromLayer:(id)layer;
- (CGPoint)convertPoint:(CGPoint)point toLayer:(id)layer;
- (CGRect)convertRect:(CGRect)rect fromLayer:(id)layer;
- (CGRect)convertRect:(CGRect)rect toLayer:(id)layer;
- (double)convertTime:(double)time fromLayer:(id)layer;
- (double)convertTime:(double)time toLayer:(id)layer;

- (void)addAnimation:(id)animation forKey:(id)key;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)key;

- (void)addSublayer:(id)sublayer;
- (void)insertSublayer:(id)fp8 above:(id)fp12;
- (void)insertSublayer:(id)fp8 atIndex:(unsigned int)fp12;
- (void)insertSublayer:(id)fp8 below:(id)fp12;
- (void)replaceSublayer:(id)layer with:(id)otherLayer;
- (void)removeFromSuperlayer;

- (id)sublayers;
- (id)superlayer;
- (BOOL)sortsSublayers;

- (void)display;
- (void)displayIfNeeded;
- (BOOL)needsDisplay;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(CGRect)needsDisplay;
- (BOOL)needsDisplayOnBoundsChange;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)needsDisplay;
- (BOOL)needsLayout;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (void)layoutSublayers;
- (void)drawInContext:(CGContextRef)context;
- (void)renderInContext:(CGContextRef)context;

- (CGPoint)anchorPoint;

- (CGAffineTransform)affineTransform;
- (void)setAffineTransform:(CGAffineTransform)affineTransform;

- (CGColorRef)backgroundColor;
- (void)setBackgroundColor:(CGColorRef)backgroundColor;

- (id)backgroundFilters;

- (CGRect)bounds;
- (void)setBounds:(CGRect)bounds;

- (BOOL)clearsContext;
- (void)setClearsContext:(BOOL)clearsContext;

- (id)compositingFilter;

- (id)contents;
- (void)setContents:(id)contents;

- (id)contentsGravity;
- (void)setContentsGravity:(id)contentsGravity;

- (CGAffineTransform)contentsTransform;

- (id)delegate;
- (void)setDelegate:(id)delegate;

- (id)fillMode;

- (id)filters;

- (CGRect)frame;
- (void)setFrame:(CGRect)frame;

- (BOOL)hidden;
- (void)setHidden:(BOOL)hidden;

- (BOOL)masksToBounds;
- (void)setMasksToBounds:(BOOL)masksToBounds;

- (id)magnificationFilter;

- (id)minificationFilter;

- (id)name;

- (float)opacity;

- (BOOL)opaque;
- (void)setOpaque:(BOOL)opaque;

- (CGPoint)position;
- (void)setPosition:(CGPoint)fp8;

- (void)setSortsSublayers:(BOOL)fp8;
- (void)setSublayers:(id)sublayers;

- (CATransform)sublayerTransform;
- (void)setSublayerTransform:(CATransform)sublayerTransform;

- (CATransform)transform;
- (void)setTransform:(CATransform)transform;

- (void)setZPosition:(float)zPosition;
- (float)zPosition;

@end

@interface CALayer (CALayerScrolling)
- (void)scrollPoint:(CGPoint)point;
- (void)scrollRectToVisible:(CGRect)rect;
- (CGRect)visibleRect;
@end

@interface CALayer (CALayerPrivate) 
+ (BOOL)shouldCopyValueForKey:(id)key;
+ (BOOL)shouldRetainValueForKey:(id)key;
- (id)hitTest:(CGPoint)point options:(unsigned int)options;
- (void)setContentsChanged;
- (void)invalidateContents;
- (id)ancestorSharedWithLayer:(id)layer;
- (BOOL)isDescendantOf:(id)superlayer;
- (float)nearClippingDepth;
- (void *)regionBeingDrawn;
- (BOOL)autoreverses;
- (double)beginTime;
- (double)duration;
- (float)repeatCount;
- (double)repeatDuration;
- (CGSize)size;
- (float)speed;
- (id)sublayerEnumerator;
- (double)timeOffset;

@end
