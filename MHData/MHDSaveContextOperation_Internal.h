//
//  MHDSaveContextOperationInternal.h
//  MHData
//
//  Created by Malcolm Hall on 14/10/2016.
//  Copyright © 2016 Malcolm Hall. All rights reserved.
//

#import <CoreData/CoreData.h>
#import <MHFoundation/MHFoundation_Private.h>
#import <MHData/MHDDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface MHDSaveContextOperation : MHFSerialQueueOperation

- (instancetype)initWithContext:(NSManagedObjectContext *)context;

@property (nonatomic, strong, nullable) NSManagedObjectContext *context;

@property (nonatomic, copy, nullable) void (^saveContextCompletionBlock)(NSError * __nullable operationError);

@end

NS_ASSUME_NONNULL_END