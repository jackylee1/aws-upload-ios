//
//  ViewController.h
//  photoTest
//
//  Created by Mauricio Giraldo on 13/10/15.
//  Copyright © 2015 Mauricio Giraldo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIButton *photoButton;
- (IBAction)buttonTapped:(id)sender;
- (IBAction)uploadTapped:(id)sender;

@end

