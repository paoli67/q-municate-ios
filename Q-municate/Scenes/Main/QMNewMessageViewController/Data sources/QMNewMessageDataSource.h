//
//  QMNewMessageDataSource.h
//  Q-municate
//
//  Created by Vitaliy Gorbachov on 3/15/16.
//  Copyright © 2016 Quickblox. All rights reserved.
//

#import "QMTableViewDataSource.h"

@interface QMNewMessageDataSource : QMTableViewDataSource

- (QBUUser *)userAtIndexPath:(NSIndexPath *)indexPath;

@end
