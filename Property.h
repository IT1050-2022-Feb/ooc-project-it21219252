//Created by IT21219252
#ifndef PROPERTY_H
#define PROPERTY_H

#include "review.h"
#define SIZE 2


class Property {
  protected:
    char property_ID[5];
    double propertyPrice;
    double generalEstimate;
    char propertyType[15];
    char propertyAddress[100];
    char propertyDescription[250];
    char propertyAvailability[15];
    Review *review[SIZE];
  public:
    Property();
    Property(const char tProperty_ID[], double tPropertyPrice, double tGeneralEstimate, const char tPropertyType[], const char tPropertyAddress[], const char tPropertyDescription[], const char tPropertyAvailability[], const char tReview0_ID[],const char tReview_date0[],const char tDescription0[], const char tReview1_ID[],const char tReview_date1[],const char tDescription1[] );
    void displayPropertyDetails();
    void buyProperrty();
    void rentProperty();
    void leaseProperty();
    void sellProperty();
    void updatePropertyDetails();
    void generateGeneralEstimate();
    void compareProperty();
    void searchProperty();
    ~Property();
};

#endif
