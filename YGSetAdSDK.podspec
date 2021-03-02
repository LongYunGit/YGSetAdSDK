Pod::Spec.new do |spec|
  spec.name         = "YGSetAdSDK"
  spec.version      = "0.0.1"
  spec.summary      = "This is a advertising SDK for multi-platform."
  spec.description  = <<-DESC
                      This is a advertising SDK for multi-platform. Include TouTiao、baidu、kuaishou、gdt、OneWay、mintegral、yungao.
                   DESC
  spec.homepage     = "https://github.com/LongYunGit/YGSetAdSDK"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "zhangbao" => "zhangbao@ly.group" }
  spec.platform     = :ios, "9.0"
#  spec.source       = { :git => "https://github.com/LongYunGit/YGSetAdSDK.git", :tag => "#{spec.version}" }
  spec.source       = { :git => "https://github.com/LongYunGit/YGSetAdSDK.git", :commit => "35e95a4" }
  spec.requires_arc = true
  spec.frameworks = 'SystemConfiguration', 'CoreTelephony', 'AdSupport', 'Foundation','UIKit'
  spec.pod_target_xcconfig = { 
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => ['arm64', 'i386']
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => ['arm64', 'i386'] }
  spec.default_subspecs = 'Core'
  
  spec.subspec 'Core' do |ss|
      ss.vendored_frameworks = 'Frameworks/Core/*.framework'
  end
  
  spec.subspec 'baidu' do |ss|
      ss.frameworks = 'AVFoundation', 'AdSupport', 'CoreLocation', 'CoreMedia', 'CoreMotion', 'CoreTelephony', 'MessageUI', 'SafariServices', 'StoreKit', 'SystemConfiguration', 'WebKit'
      ss.libraries = 'c++'
      ss.pod_target_xcconfig = { 'OTHER_LDFLAGS' => ['-lObjC', '-lstdc++'] }
      ss.vendored_frameworks = 'Frameworks/baidu/*.framework'
      ss.resource = 'Frameworks/baidu/baidumobadsdk.bundle'
      ss.dependency 'YGSetAdSDK/Core', "#{spec.version}"
  end
  
  spec.subspec 'gdt' do |ss|
      ss.vendored_frameworks = 'Frameworks/gdt/*.framework'
      ss.dependency 'YGSetAdSDK/Core', "#{spec.version}"
      ss.dependency 'GDTMobSDK', '4.12.3'
  end
  
#  spec.subspec 'kuaishou' do |ss|
##      ss.frameworks = 'MobileCoreServices', 'CoreGraphics', 'AVFoundation', 'AdSupport', 'CoreLocation', 'Security', 'CoreTelephony', 'StoreKit', 'SystemConfiguration', 'WebKit', 'CoreData', 'MediaPlayer', 'CoreMedia', 'Accelerate', 'AVKit', 'MessageUI', 'QuickLook', 'AddressBook'
##      ss.libraries = 'z', 'resolv.9', 'sqlite3', 'c++', 'c++abi'
#      ss.vendored_frameworks = 'Frameworks/kuaishou/*.framework'
#      ss.resource = 'Frameworks/kuaishou/KSAdSDK.bundle'
#      ss.dependency 'YGSetAdSDK/Core'
#  end
#  
#  spec.subspec 'toutiao' do |ss|
##      ss.frameworks = 'WebKit', 'MapKit', 'MediaPlayer', 'CoreLocation', 'AdSupport', 'CoreMedia', 'AVFoundation', 'CoreTelephony', 'StoreKit', 'SystemConfiguration', 'MobileCoreServices', 'CoreMotion', 'Accelerate', 'AudioToolbox', 'JavaScriptCore', 'Security'
##      ss.libraries = 'c++', 'resolv', 'z', 'sqlite3', 'bz2', 'xml2', 'iconv'
#      ss.vendored_frameworks = 'Frameworks/toutiao/*.framework'
#      ss.resource = 'Frameworks/toutiao/BUAdSDK.bundle'
#      ss.dependency 'YGSetAdSDK/Core'
#  end
#  
#  spec.subspec 'oneway' do |ss|
#      ss.vendored_frameworks = 'Frameworks/oneway/*.framework'
#      ss.vendored_libraries = 'Frameworks/oneway/OnewaySDK.a'
#      ss.dependency 'YGSetAdSDK/Core'
#  end
#  
#  spec.subspec 'mintegral' do |ss|
#      ss.vendored_frameworks = 'Frameworks/mintegral/*.framework'
#      ss.dependency 'YGSetAdSDK/Core'
#  end
#  
#  spec.subspec 'yungao' do |ss|
#      ss.vendored_frameworks = 'Frameworks/yungao/*.framework'
#      ss.resource = 'Frameworks/yungao/YGAdSDK.bundle'
#      ss.dependency 'YGSetAdSDK/Core'
#  end

end
