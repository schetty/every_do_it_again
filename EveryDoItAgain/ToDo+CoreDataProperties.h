//
//  ToDo+CoreDataProperties.h
//  EveryDoItAgain
//
//  Created by naomi schettini on 2016-09-28.
//  Copyright © 2016 naomi schettini. All rights reserved.
//

#import "ToDo+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface ToDo (CoreDataProperties)

+ (NSFetchRequest<ToDo *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *title;
@property (nullable, nonatomic, copy) NSString *desc;
@property (nonatomic) int64_t priorityNum;
@property (nonatomic) BOOL isCompleted;

@end

NS_ASSUME_NONNULL_END
