//created by IT21217586
#ifndef REVIEW_H
#define REVIEW_H

class registeredCustomer;

class Review{
	 private:
	 	char review_ID[5];
	 	char review_date[10];
	 	char description[20];
	 	
	public:
		Review();
    Review(const char tReview_ID[],const char 
    tReview_date[],const char tDescription[]);
		void addReview(registeredCustomer *C); 
		void updateReview(registeredCustomer *registeredcustomer);
		void removeReview(registeredCustomer *registeredcustomer);
		void categorizeReviews();
		~Review(); 
};

#endif
