//
//  NSManagedObject+MHD.m
//  MHData
//
//  Created by Malcolm Hall on 19/05/2016.
//
//

#import <MHData/NSManagedObject+MHD.h>

@implementation NSManagedObject (MHD)

- (id)objectForKeyedSubscript:(NSString*)key {
    return [self valueForKey:key];
}

- (void)setObject:(id)object forKeyedSubscript:(id<NSCopying>)key {
    NSParameterAssert([(id<NSObject>)key isKindOfClass:[NSString class]]);
    [self setValue:object forKey:(NSString*)key];
}

@end