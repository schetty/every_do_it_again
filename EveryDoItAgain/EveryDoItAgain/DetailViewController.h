//
//  DetailViewController.h
//  EveryDoItAgain
//
//  Created by naomi schettini on 2016-09-28.
//  Copyright © 2016 naomi schettini. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EveryDoItAgain+CoreDataModel.h"
#import "ToDo+CoreDataClass.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) ToDo *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

