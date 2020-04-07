Pod::Spec.new do |s|
  s.name             = 'Mux-Stats-Core'

  s.version          = '2.2.2'
  s.source           = { :git => 'https://github.com/muxinc/stats-sdk-objc.git',
                         :tag => "v#{s.version}" }

  s.summary          = 'The Mux Stats Core'
  s.description      = 'The Mux stats Core provides performance analytics and QoS monitoring for video.'

  s.homepage         = 'https://mux.com'
  s.social_media_url = 'https://twitter.com/muxhq'

  s.license          = 'Apache 2.0'
  s.author           = { 'Mux' => 'ios-sdk@mux.com' }

  s.ios.deployment_target = '8.0'
  s.ios.vendored_frameworks = 'Frameworks/iOS/fat/MuxCore.framework'
  s.ios.frameworks = 'AVKit', 'AVFoundation'

  s.tvos.deployment_target = '9.0'
  s.tvos.vendored_frameworks = 'Frameworks/tvOS/fat/MuxCoreTv.framework'
  s.tvos.frameworks = 'AVKit', 'AVFoundation'
end
