//created by IT21217586
#include"review.h"
#include <cstring>

Review::Review() {
  strcpy(review_ID,"");
  strcpy(review_date,"");
  strcpy(description,"");
}

Review::Review(const char tReview_ID[],const char tReview_date[],const char tDescription[])

{
  strcpy(review_ID,tReview_ID);
  strcpy(review_date,tReview_date);
  strcpy(description,tDescription); 
}

void Review::addReview(registeredCustomer *registeredcustomer)
{
  
}
void Review::updateReview(registeredCustomer *registeredcustomer)
{
  
}
void Review::removeReview(registeredCustomer *registeredcustomer)
{
  
}
void Review::categorizeReviews()
{
  
}
Review::~Review(){
  
}
