//Created by IT21219252
#include "Payment.h"
#include <cstring>

Payment::Payment() {
  strcpy(pay_ID,"");
  strcpy(payType,"");
  payAmount = 0;
}

Payment::Payment(char tPay_ID[], char tPayType[], double tPayAmount) {
  strcpy(pay_ID,tPay_ID);
  strcpy(payType,tPayType);
  payAmount = tPayAmount;
}

void Payment::displayPaymentDetails(Property *tPty, registeredCustomer *tRc, char tPay_ID[], char tPayType[],double tPayAmount) {  
  
}

void Payment::checkPayment() {
  
}

void Payment::confirmPayment() {
  
}

void Payment::updatePaymentDetails() {
  
}

Payment::~Payment() {
  
}