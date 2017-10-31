//
//  MasterViewController.h
//  MCoreDataDemo
//
//  Created by Malcolm Hall on 15/06/2016.
//  Copyright © 2016 Malcolm Hall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <MCoreData/MCoreData.h>
#import "Event+CoreDataClass.h"

@class DetailViewController;

@interface MasterViewController : MCDFetchedResultsTableViewController<Event *> // UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

//@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
//@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) MCDPersistentContainer *persistentContainer;


@property (strong, nonatomic) id fetchItem;

@end

