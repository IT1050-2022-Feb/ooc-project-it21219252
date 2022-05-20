//created by IT21220074
#include "Scammedcustomer.h"
#include <cstring>

scammedCustomer::scammedCustomer() {
  strcpy(IP_address,"");  
  strcpy(customer_password,"");
  strcpy(customer_ID,"");
  strcpy(customer_Address,"");
  strcpy(customer_TP_number,"");
	strcpy(complaint," ");
}

scammedCustomer::scammedCustomer(const char tIP_address[],const char pComplaint[], const char tCustomer_password[],const char tCustomer_ID[],const char tCustomer_Address[],const char tCustomer_TP_number[]) 
{
  strcpy(IP_address,tIP_address); 
  strcpy(customer_ID,tCustomer_ID); 
  strcpy(customer_password,tCustomer_password);
  strcpy(customer_Address,tCustomer_Address);
	strcpy(complaint,pComplaint);
}

void scammedCustomer::addEvidence() {
	
}

void scammedCustomer::addComplaint() {
	
}

scammedCustomer::~scammedCustomer() {
	
}