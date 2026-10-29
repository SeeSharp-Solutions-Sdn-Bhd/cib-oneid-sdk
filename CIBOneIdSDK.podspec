Pod::Spec.new do |spec|
    spec.name                     = 'CIBOneIdSDK'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk'
    spec.source                   = { :git => 'https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk.git', :tag => spec.version.to_s }
    spec.authors                  = { 'SeeSharp Solutions' => 'support@seesharp.my' }
    spec.license                  = { :type => 'MIT', :text => 'Copyright 2025 SeeSharp Solutions. All rights reserved.' }
    spec.summary                  = 'CIB OneID Client SDK for iOS'
    spec.vendored_frameworks      = 'CIBOneIdSDK.xcframework'
    spec.ios.deployment_target    = '16.0'
    spec.dependency 'GoogleSignIn'
    spec.dependency 'FBSDKLoginKit'
end
