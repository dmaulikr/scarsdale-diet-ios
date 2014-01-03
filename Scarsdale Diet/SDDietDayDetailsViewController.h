//
//  SDDietDayDetailsViewController.h
//  Scarsdale Diet
//
//  Created by mihata on 5/24/13.
//  Copyright (c) 2013 Mihail Velikov. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SDDietDayDetailsViewController : UITableViewController <UITableViewDelegate, UISplitViewControllerDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UIImageView *detailImage;

- (IBAction)shareButton:(id)sender;


@end
