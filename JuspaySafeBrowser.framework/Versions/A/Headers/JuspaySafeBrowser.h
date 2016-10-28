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

typedef void(^JPBlock)(Boolean status,NSError* _Nullable error, id _Nullable info);

@protocol JuspaySafeBrowserDelegate <NSObject>

@optional
- (BOOL)browserShouldStartLoadingUrl:(NSURL * _Nullable)url;
- (void)browserDidStartLoadingUrl:(NSURL * _Nullable)url;
- (void)browserDidFinishLoadUrl:(NSURL * _Nullable)url;
- (void)browserDidFailLoadingUrl:(NSURL* _Nullable)url withError:(NSError *_Nullable)error;
@end

@interface JuspaySafeBrowser : UIView

@property (nonatomic, weak) id <JuspaySafeBrowserDelegate>_Nullable jpBrowserDelegate;
@property (nonatomic) Boolean isControllerAllowedToPop;
@property (nonatomic) Boolean shouldLoadEndURL;

- (void)startpaymentWithJuspayInView:(UIView* _Nonnull)view withParameters:(BrowserParams* _Nonnull)params callback:(JPBlock _Nullable)callback;
- (void)backButtonPressed;
- (void)callbackWithError:(int)errorCode failiingURL:(NSString* _Nullable)failingURL;

@end
