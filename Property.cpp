//Created by IT21219252
#include "Property.h"
#include <cstring>
#define SIZE 2


Property::Property() {
    strcpy(property_ID,"");
    propertyPrice = 0;
    generalEstimate = 0;
    strcpy(propertyType,"");
    strcpy(propertyAddress,"");
    strcpy(propertyDescription,"");
    strcpy(propertyAvailability,"");
    review[0] = new Review();
    review[1] = new Review();
}

Property::Property(const char tProperty_ID[], double tPropertyPrice, double tGeneralEstimate, const char tPropertyType[], const char tPropertyAddress[], const char tPropertyDescription[], const char tPropertyAvailability[], const char tReview0_ID[],const char tReview_date0[],const char tDescription0[], const char tReview1_ID[],const char tReview_date1[],const char tDescription1[]) {
    strcpy(property_ID,tProperty_ID);
    propertyPrice = tPropertyPrice;
    generalEstimate = tGeneralEstimate;
    strcpy(propertyType,tPropertyType);
    strcpy(propertyAddress,tPropertyAddress);
    strcpy(propertyDescription,tPropertyDescription);
    strcpy(propertyAvailability,tPropertyAvailability);
    review[0] = new Review(tReview0_ID,tReview_date0,tDescription0);
    review[1] = new Review(tReview1_ID,tReview_date1,tDescription1);
}

void Property::displayPropertyDetails() {
  
}

void Property::buyProperrty() {
  
}

void Property::rentProperty() {
  
}

void Property::leaseProperty() {
  
}

void Property::sellProperty() {
  
}

void Property::updatePropertyDetails() {
  
}
    
void Property::generateGeneralEstimate() {
  
}

void Property::compareProperty() {
  
}

void Property::searchProperty() {
  
}

Property::~Property() {
  for(int i = 0;  i < SIZE; i++ ) {
    delete review[i];
  }
}