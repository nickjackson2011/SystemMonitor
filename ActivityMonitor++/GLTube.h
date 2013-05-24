//
//  GLTube.h
//  ActivityMonitor++
//
//  Created by st on 23/05/2013.
//  Copyright (c) 2013 st. All rights reserved.
//

#import <GLKit/GLKit.h>

@interface GLTube : GLKViewController
- (id)initWithGLKView:(GLKView*)aGLView fromValue:(float)from toValue:(float)to;
- (void)setValue:(CGFloat)value;
@end
