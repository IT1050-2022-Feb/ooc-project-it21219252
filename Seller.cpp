//Created by IT21217654
#include"Seller.h"
#include<cstring>
#define SIZE 2

Seller::Seller()
{
  strcpy(IP_address,"");  
  strcpy(SellerID,"");
  strcpy(Sellername,"");
  strcpy(Sellerpassword,"");
  sProperty[0]= new Property();
  sProperty[1]= new Property();
}
    
Seller::Seller(const char tIP_address[], const char tSellerID[], const char tSellername[],const char tSellerpassword[],const char tProperty_ID1[], double tPropertyPrice1, double tGeneralEstimate1, const char tPropertyType1[], const char tPropertyAddress1[], const char tPropertyDescription1[], const char tPropertyAvailibility1[], const char tReview0_ID[],const char tReview_date0[],const char tDescription0[], const char tReview1_ID[],const char tReview_date1[],const char tDescription1[], const char tProperty_ID2[], double tPropertyPrice2, double tGeneralEstimate2, const char tPropertyType2[], const char tPropertyAddress2[], const char tPropertyDescription2[], const char tPropertyAvailibility2[],const char tReview2_ID[],const char tReview_date2[],const char tDescription2[], const char tReview3_ID[],const char tReview_date3[],const char tDescription3[])
{
  strcpy(IP_address,tIP_address);
  strcpy(SellerID,tSellerID);
  strcpy(Sellername,tSellername);
  strcpy(Sellerpassword,tSellerpassword); 
  sProperty[0] = new Property(tProperty_ID1,tPropertyPrice1,tGeneralEstimate1,tPropertyType1, tPropertyAddress1,tPropertyDescription1,tPropertyAvailibility1, tReview0_ID,tReview_date0, tDescription0,tReview1_ID,tReview_date1, tDescription1);
  sProperty[1] = new Property(tProperty_ID2,tPropertyPrice2,tGeneralEstimate2,tPropertyType2,tPropertyAddress2,tPropertyDescription2,tPropertyAvailibility2, tReview2_ID, tReview_date2, tDescription2,tReview3_ID,tReview_date3, tDescription3);
}  

void Seller::Login() {

}

void Seller::Logout(){

}


void Seller::addLanguage(Language *sLanguage){

}


void Seller::ViewSellerAccount(){

}

void Seller::UpdateSellerAccount(){

}


void Seller::BlacklistSellerAccount(Admin *admin) {

}

void Seller::DisplaySellerDetails() {

}

Seller::~Seller() {
  for(int i = 0; i < SIZE; i++) {
    delete sProperty[i];
  }
}