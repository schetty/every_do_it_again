//
//  ToDo+CoreDataProperties.m
//  EveryDoItAgain
//
//  Created by naomi schettini on 2016-09-28.
//  Copyright © 2016 naomi schettini. All rights reserved.
//

#import "ToDo+CoreDataProperties.h"

@implementation ToDo (CoreDataProperties)

+ (NSFetchRequest<ToDo *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"ToDo"];
}

@dynamic title;
@dynamic desc;
@dynamic priorityNum;
@dynamic isCompleted;

@end
