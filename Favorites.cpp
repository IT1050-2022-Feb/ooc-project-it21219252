//created by IT21220074
#include "Favorites.h"
#include <cstring>

favorites::favorites() {
	strcpy(notes,"");
	strcpy(property_ID,"");
  propertyPrice = 0;
  generalEstimate= 0;
  strcpy(propertyType,"");
  strcpy(propertyAddress,"");
  strcpy(propertyDescription,"");
  strcpy(propertyAvailability,"");
}

favorites::favorites(const char pID[], const char pType[],const char pAddress[], const char pDescription[],const char pAvailability[], double pGeneralestimate,double pPrice, const char pNotes[]){
		
	strcpy(notes,pNotes);
	strcpy(property_ID,pID);
	strcpy(propertyType,pType);
	strcpy(propertyAddress,pAddress);
	strcpy(propertyDescription,pDescription);
	strcpy(propertyAvailability,pAvailability);
	generalEstimate= pGeneralestimate;
	propertyPrice = pPrice;
	
}
void favorites::addFavorites(){
 	
}

void favorites::addNotes(){
	
}

void favorites::removeFavorites(){
	
}

favorites::~favorites(){
	
}