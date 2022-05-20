//created by IT21217586
#include "RegisteredCustomer.h"

#include <cstring>

registeredCustomer::registeredCustomer()
{
  
strcpy(IP_address,"");  
strcpy(customer_password,"");
strcpy(customer_ID,"");
strcpy(customer_Address,"");
strcpy(customer_TP_number,"");
CFavorites[0] = new favorites();
CFavorites[1] = new favorites();
  
}

registeredCustomer::registeredCustomer(const char tIP_address[], const char tCustomer_password[],const char tCustomer_ID[],const char tCustomer_Address[],const char tCustomer_TP_number[],const char tProperty_ID1[], double tPropertyPrice1, double tGeneralEstimate1, const char tPropertyType1[], const char tPropertyAddress1[], const char tPropertyDescription1[], const char tPropertyAvailibility1[],const char notes1[],const char tProperty_ID2[], double tPropertyPrice2, double tGeneralEstimate2, const char tPropertyType2[], const char tPropertyAddress2[], const char tPropertyDescription2[], const char tPropertyAvailibility2[],const char notes2[])
{

strcpy(IP_address,tIP_address); 
strcpy(customer_ID,tCustomer_ID); 
strcpy(customer_password,tCustomer_password);
strcpy(customer_Address,tCustomer_TP_number);
CFavorites[0] = new favorites(tProperty_ID1, tPropertyType1, tPropertyAddress1, tPropertyDescription1, tPropertyAvailibility1, tGeneralEstimate1, tPropertyPrice1, notes1);
CFavorites[1] = new favorites(tProperty_ID2, tPropertyType2, tPropertyAddress2, tPropertyDescription2, tPropertyAvailibility2, tGeneralEstimate2, tPropertyPrice2, notes2);

}

void registeredCustomer::login(){

}
  
void  registeredCustomer::viewCustomerAccount(Admin *admin){

}
  
void registeredCustomer::updateCustomerAccount(){

}
  
void  registeredCustomer::removeCustomerAccount() {

 }
  
void registeredCustomer::addCustomerAccount() {

}
  
 void registeredCustomer::blacklistAccount(Admin *admin) {

}
  
void registeredCustomer::addLanguage(Language *sLanguage) {

}
 
registeredCustomer::~registeredCustomer(){
    for(int i = 0; i < SIZE; i++) {
       delete CFavorites[i];
  }
}