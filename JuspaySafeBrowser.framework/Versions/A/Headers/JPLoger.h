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

#import <Foundation/Foundation.h>
#import "TransactionStatus.h"

#define Logger [JPLoger sharedInstance]

@interface JPLoger : NSObject

@property (nonatomic, strong) NSString *clientID;

+(JPLoger*)sharedInstance;

- (void)logPaymentStatus:(TransactionStatus*)status;
- (void)logPaymentStatus:(NSString*)transactionID paymentStatus:(PaymentStatus)paymentStatus;
@end
