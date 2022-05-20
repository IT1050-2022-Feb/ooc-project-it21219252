//created by IT21220074
#include"RegisteredCustomer.h"
#include "Payment.h"

class scammedCustomer:public registeredCustomer 
 {
 	private:
 		char complaint[100];
    Payment *pt;

 	public:
 			scammedCustomer();
 			scammedCustomer(const char pComplaint[],const char tIP_address[], const char tCustomer_password[],const char tCustomer_ID[],const char tCustomer_Address[],const char tCustomer_TP_number[]);
 			
      void addEvidence();
			void addComplaint();
			~scammedCustomer();
 };