#import "ViewController.h"

@import AVFoundation;
@import AVKit;
@import MUXSDKStatsTv;

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSURL* videoURL = [NSURL URLWithString:@"http://www.streambox.fr/playlists/x36xhzz/x36xhzz.m3u8"];
    AVPlayer *player = [AVPlayer playerWithURL:videoURL];
    AVPlayerViewController *controller = [[AVPlayerViewController alloc] init];
    controller.player = player;

    NSDictionary *config = @{
                             @"property_key": @"",
                             @"video_title": @"Big Buck Bunny",
                             @"video_id": @"bigbuckbunny",
                            };
    [MUXSDKStats monitorAVPlayerViewController:controller withPlayerName:@"awesome" andConfig:config];

    [player play];

    [self addChildViewController:controller];
    [self.view addSubview:controller.view];
    controller.view.frame = self.view.frame;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
