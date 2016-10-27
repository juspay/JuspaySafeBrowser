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

typedef enum{
    UNKNOWNSTATUS,
    SUCCESS,
    FAILURE,
    CANCELLED
}PaymentStatus;
#define PaymentsStatusString(enum) [@[@"UNKNOWN",@"SUCCESS",@"FAILURE",@"CANCELLED"] objectAtIndex:enum]

#import <Foundation/Foundation.h>

@interface TransactionStatus : NSObject

@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *paymentID;
@property (nonatomic, strong) NSString *appName;
@property (nonatomic, strong) NSString *paymentStatusS;
@property (nonatomic) PaymentStatus paymentStatus;

@end
