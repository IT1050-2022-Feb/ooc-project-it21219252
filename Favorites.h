//created by IT21220074
#ifndef FAVORITES_H
#define FAVORITES_H

#include "Property.h"

class favorites: public Property {
  private:
  	char notes[50];
    
  public:
    favorites();
    favorites(const char pID[], const char pType[],const char pAddress[], const char pDescription[],const char pAvailability[], double pGeneralestimate,double pPrice, const char pNotes[]);
	void addFavorites();
	void addNotes();
	void removeFavorites();
	~favorites();
};

#endif



