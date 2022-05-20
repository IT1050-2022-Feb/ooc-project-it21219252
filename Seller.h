//Created by IT21217654
#ifndef SELLER_H
#define SELLER_H

#include "Guest.h"
#include "Property.h"
#include "Language.h"
#include "Admin.h"
#define SIZE 2


class Seller: public Guest{
private:
     char SellerID[5];
     char Sellername[50];
     char Sellerpassword[50];
     Property *sProperty[SIZE];
     Language *sLanguage;
public:
     Seller();
     Seller(const char tIP_address[], const char tSellerID[], const char tSellername[],const char tSellerpassword[],const char tProperty_ID1[], double tPropertyPrice1, double tGeneralEstimate1, const char tPropertyType1[], const char tPropertyAddress1[], const char tPropertyDescription1[], const char tPropertyAvailibility1[], const char tReview0_ID[],const char tReview_date0[],const char tDescription0[], const char tReview1_ID[],const char tReview_date1[],const char tDescription1[], const char tProperty_ID2[], double tPropertyPrice2, double tGeneralEstimate2, const char tPropertyType2[], const char tPropertyAddress2[], const char tPropertyDescription2[], const char tPropertyAvailibility2[],const char tReview2_ID[],const char tReview_date2[],const char tDescription2[], const char tReview3_ID[],const char tReview_date3[],const char tDescription3[]);
     void Login();
     void Logout(); 
     void addLanguage(Language *sLanguage);
     void ViewSellerAccount();
     void UpdateSellerAccount();
     void BlacklistSellerAccount(Admin *admin);
     void DisplaySellerDetails();
     ~Seller();
};

#endif  
