

#import <UIKit/UIKit.h>
#import <GameKit/GameKit.h>

@interface ViewController : GCEventViewController
{
    CGFloat topMenuBrowserOffset;
    Boolean topMenuShowing;
}

@property (nonatomic, retain) IBOutlet UIVisualEffectView *topMenuView;
@property (nonatomic, retain) IBOutlet UIView *browserContainerView;

@property (nonatomic, retain) IBOutlet UIImageView *btnImageBack;
@property (nonatomic, retain) IBOutlet UIImageView *btnImageForward;
@property (nonatomic, retain) IBOutlet UIImageView *btnImageRefresh;
@property (nonatomic, retain) IBOutlet UIImageView *btnImageHome;
@property (nonatomic, retain) IBOutlet UIImageView *btnImageFullScreen;
@property (nonatomic, retain) IBOutlet UIImageView *btnImgMenu;
@property (nonatomic, retain) IBOutlet UILabel     *lblUrlBar;

@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *loadingSpinner;


@end

