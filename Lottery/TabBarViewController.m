//
//  TabBarViewController.m
//  Lottery
//
//  Created by 叶添添 on 2016/12/20.
//  Copyright © 2016年 ytt. All rights reserved.
//

#import "TabBarViewController.h"

@interface TabBarViewController ()

@end

@implementation TabBarViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self setupTabBar];
    
}


-(void)setupTabBar{
    
    UITabBarItem *tabBarItem0 = [self.tabBar.items objectAtIndex:0];
    tabBarItem0.selectedImage = [[UIImage imageNamed:@"shouye-1"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    tabBarItem0.title=@"";
    UITabBarItem *tabBarItem1 = [self.tabBar.items objectAtIndex:1];
    tabBarItem1.selectedImage = [[UIImage imageNamed:@"caidian-2"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    tabBarItem1.title=@"";
    UITabBarItem *tabBarItem2 = [self.tabBar.items objectAtIndex:2];
    tabBarItem2.selectedImage = [[UIImage imageNamed:@"user-2"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    tabBarItem2.title=@"";
    
    //设置tabBarItem的字体大小
    //[[UITabBarItem appearance] setTitleTextAttributes:[NSDictionary dictionaryWithObjectsAndKeys:[UIFont systemFontOfSize:12],NSFontAttributeName,nil] forState:UIControlStateNormal];
    //设置tabBarItem的字体点击颜色
    //    UIColor * titleHighlightedColor = [UIColor colorWithRed:78.0/255.0 green:176.0/255.0 blue:149.0/255.0 alpha:1.0];
    //    [[UITabBarItem appearance] setTitleTextAttributes:[NSDictionary dictionaryWithObjectsAndKeys:titleHighlightedColor, NSForegroundColorAttributeName,nil] forState:UIControlStateSelected];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
