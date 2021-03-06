//
//  AnimatedImageView.h
//  Copyright © 2015 VoIPGRID. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnimatedImageView : UIImageView

- (void)addPoint:(CGPoint)point;
- (void)animateToNextWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay;
- (void)moveToPoint:(CGPoint)point withDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andRemoveWhenOffScreen:(BOOL)remove;
@end
