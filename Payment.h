//Created by IT21219252
#ifndef PAYMENT_H
#define PAYMENT_H

#include "RegisteredCustomer.h"
//#include "Property.h"

class Property;
class registeredCustomer;

class Payment {
  private:
    char pay_ID[5];
    char payType[20];
    double payAmount;
    Property *pty;
    registeredCustomer *rc;
  public:
    Payment();
    Payment(char tPay_ID[], char tPayType[], double tPayAmount);
    void displayPaymentDetails(Property *tPty, registeredCustomer *tRc, char tPay_ID[], char tPayType[],double tPayAmount);
    void checkPayment();
    void confirmPayment();
    void updatePaymentDetails();
    ~Payment();
};

#endif