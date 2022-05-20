//created by IT21217586
#ifndef REGISTEREDCUSTOMER_H
#define REGISTEREDCUSTOMER_H

#include "Guest.h"
#include "Language.h"
#include "Favorites.h"
#include "Admin.h"
#define SIZE 2

class favorites;
class Payment;
 
  class registeredCustomer:public Guest{
  	
  	protected:
  		char customer_password[10];
  		char customer_ID[5];
  		char customer_Address[50];
  		char customer_TP_number[10];
  		favorites *CFavorites[SIZE];
      Language *sLanguage;
      Payment *CPayment[SIZE];
  	public:
  		registeredCustomer();
  		registeredCustomer(const char tIP_address[], const char tCustomer_password[],const char tCustomer_ID[],const char tCustomer_Address[],const char tCustomer_TP_number[],const char tProperty_ID1[], double tPropertyPrice1, double tGeneralEstimate1, const char tPropertyType1[], const char tPropertyAddress1[], const char tPropertyDescription1[], const char tPropertyAvailibility1[],const char notes1[],const char tProperty_ID2[], double tPropertyPrice2, double tGeneralEstimate2, const char tPropertyType2[], const char tPropertyAddress2[], const char tPropertyDescription2[], const char tPropertyAvailibility2[], const char notes2[] );

  		void login();
  		void viewCustomerAccount(Admin *admin);
  		void updateCustomerAccount();
  		void removeCustomerAccount();
  		void addCustomerAccount();
  		void blacklistAccount(Admin *admin); 
      void addLanguage(Language *sLanguage);
      ~registeredCustomer();
  };

#endif

