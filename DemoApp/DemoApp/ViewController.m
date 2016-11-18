#import "ViewController.h"

@import AVFoundation;
@import AVKit;
@import MUXSDKStats;

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSURL* videoURL = [NSURL URLWithString:@"http://www.streambox.fr/playlists/x36xhzz/x36xhzz.m3u8"];
    AVPlayer *player = [AVPlayer playerWithURL:videoURL];
    AVPlayerViewController *controller = [[AVPlayerViewController alloc] init];
    controller.player = player;

    MUXSDKCustomerPlayerData *playerData = [[MUXSDKCustomerPlayerData alloc] initWithPropertyKey:@""];
    MUXSDKCustomerVideoData *videoData = [MUXSDKCustomerVideoData new];
    [videoData setVideoTitle:@"Big Buck Bunny"];
    [videoData setVideoId:@"bigbuckbunny"];
    [MUXSDKStats monitorAVPlayerViewController:controller withPlayerName:@"awesome" playerData:playerData videoData:videoData];

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
