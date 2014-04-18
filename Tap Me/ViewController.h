//
//  ViewController.h
//  Tap Me
//
//  Created by Monica Tamaru Jones on 1/30/14.
//
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIAlertViewDelegate>{
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
    }


@end
