/*
 * JUSPAY CONFIDENTIAL
 * __________________
 *
 * [2012] - [2016] JusPay Technologies Pvt Ltd
 * All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of JusPay Technologies Pvt Ltd. The intellectual
 * and technical concepts contained
 * herein are proprietary to JusPay Techologies Pvt Ltd
 * and may be covered by Indian Patents Office and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from JusPay Technologies Pvt Ltd.
 */

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "BrowserParams.h"
#import "JPLoger.h"
#import "JuspayCodes.h"

@class JPNetworkTest;

typedef void(^JPBlock)(BOOL status,NSError *error, id info);

@protocol JuspaySafeBrowserDelegate <NSObject>

@optional
- (BOOL)browserShouldStartLoadingUrl:(NSURL *)url;
- (void)browserDidStartLoadingUrl:(NSURL *)url;
- (void)browserDidFinishLoadUrl:(NSURL *)url;
- (void)browserDidFailLoadingUrl:(NSURL*)url withError:(NSError *)error;
@end

@interface JuspaySafeBrowser : UIView

@property (nonatomic, weak) id <JuspaySafeBrowserDelegate>jpBrowserDelegate;
@property (nonatomic) Boolean isControllerAllowedToPop;
@property (nonatomic) Boolean shouldLoadEndURL;

- (void)startpaymentWithJuspayInView:(UIView*)view withParameters:(BrowserParams*)params callback:(JPBlock)callback;
- (void)backButtonPressed;
- (void)callbackWithError:(int)errorCode failiingURL:(NSString*)failingURL;

@end
