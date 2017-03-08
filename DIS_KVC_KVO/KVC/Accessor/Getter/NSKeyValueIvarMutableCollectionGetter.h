//
//  NSKeyValueIvarMutableCollectionGetter.h
//  KV
//
//  Created by renjinkui on 2017/2/16.
//  Copyright © 2017年 JK. All rights reserved.
//

#import "NSKeyValueProxyGetter.h"

@interface NSKeyValueIvarMutableCollectionGetter : NSKeyValueProxyGetter
@property (nonatomic, assign) struct objc_ivar *ivar;

- (id)initWithContainerClassID:(id)containerClassID key:(NSString *)key containerIsa:(Class)containerIsa ivar:(struct objc_ivar *)ivar proxyClass:(Class)proxyClass;
@end