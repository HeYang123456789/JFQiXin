//
//  JFCustomerServiceCenterCell.h
//  JFQiXin
//
//项目详解：http://www.jianshu.com/p/87b9194c4b01
//源码：   https://github.com/tubie/JFQiXin

#import <UIKit/UIKit.h>

@interface JFCustomerServiceCenterCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *listLabel;

+ (instancetype)cellWithTableView:(UITableView *)tableView;


@end
