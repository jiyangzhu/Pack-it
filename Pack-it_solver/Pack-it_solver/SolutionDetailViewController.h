//
//  SolutionDetailViewController.h
//  Pack-it_solver
//
//  Created by Jiyang on 3/8/15.
//  Copyright (c) 2015 Jiyang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PXNetworkManager.h"
#import "MBProgressHUD.h"

@interface SolutionDetailViewController : UIViewController<PXNetworkProtocol, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    
    __weak IBOutlet UIButton *_imageButton;
    
    __weak IBOutlet UITextField *_textPrice;
    
    NSData *_imgData;
    
    MBProgressHUD *_hud;
}

@property (strong, nonatomic) PXSolution *solution;


@end