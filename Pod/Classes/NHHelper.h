//
//  NHHelper.h
//  Pods
//
//  Created by Sergey Minakov on 23.05.15.
//
//

#import <Foundation/Foundation.h>

#define rgb(r,g,b) \
[UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define rgba(r,g,b,a) \
[UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]

#define hex(hexValue) \
[UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16))/255.0 \
green:((float)((hexValue & 0xFF00) >> 8))/255.0 \
blue:((float)(hexValue & 0xFF))/255.0 \
alpha:1.0]

#define hexa(hexValue, alpha) \
[UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16))/255.0 \
green:((float)((hexValue & 0xFF00) >> 8))/255.0 \
blue:((float)(hexValue & 0xFF))/255.0 \
alpha:alpha]

#define is(instance, Type) \
[instance isKindOfClass:[Type class]]

#define as(instance, Type) \
((Type*)([instance isKindOfClass:[Type class]] ? instance : nil))


#define IS_IPAD   ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define IS_IPHONE ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)

#define SYSTEM_VERSION_EQUAL_TO(v) \
([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v) \
([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v) \
([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v) \
([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v) \
([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define currentOrientation \
([UIScreen mainScreen].bounds.size.width > [UIScreen mainScreen].bounds.size.height) ? UIDeviceOrientationLandscapeLeft : UIDeviceOrientationPortrait

#define CLAMP(x, low, high) (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))

@interface NHHelper : NSObject

//color hex - http://stackoverflow.com/a/12397366

//dates
//screenshot
//switch root view controller
//recolor image
//humanize
//tabbar hiding
//md5
//swift appearance in

@end
