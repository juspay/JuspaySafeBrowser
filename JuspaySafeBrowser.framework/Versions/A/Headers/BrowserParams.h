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
#import "JPCard.h"

@interface BrowserParams : NSObject

//Transaction starting params
@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *postData;
@property (nonatomic, strong) NSArray<NSString*> *endUrlRegexes;

//Merchant specific params
@property (nonatomic, strong) NSString *merchantId;
@property (nonatomic, strong) NSString *clientId;

//Transaction extra params
@property (nonatomic, strong) NSString *transactionId;
@property (nonatomic, strong) NSString *orderId;
@property (nonatomic, strong) NSString *customerId;
@property (nonatomic, strong) NSString *displayNote;
@property (nonatomic, strong) NSString *remarks;
@property (nonatomic, strong) NSString *amount;

//Customer specific params
@property (nonatomic, strong) NSString *customerEmail;
@property (nonatomic, strong) NSString *customerPhoneNumber;

//Payment Instrumets params
@property (nonatomic, strong) NSString *cardToken;
@property (nonatomic, strong) JPCard *card;
@property (nonatomic, assign) CardBrand cardBrand;
@property (nonatomic, assign) CardType cardType;
@property (nonatomic, assign) Boolean merchantSentCardBrand;

//Extra params
@property (nonatomic, strong) NSArray<NSString*> *whiteListedDomainsRegex;
@property (nonatomic, strong) NSDictionary *customParameters;

@end
