#include <iostream>

#include "Favorites.h"
#include "Scammedcustomer.h"
#include "Seller.h"
#include "virtualTour.h"

int main() {
  // Creation of Objects
  Guest *G = new Guest();
  Seller *S = new Seller();
  registeredCustomer *RC = new registeredCustomer();
  scammedCustomer *SC = new scammedCustomer();
  Admin *A = new Admin();
  Language *L = new Language();
  virtualTour *V = new virtualTour();
  favorites *F = new favorites();
  Property *P = new Property();
  Review *R = new Review();
  Payment *Py = new Payment();

  // Deleting Created Objects;
  delete G;
  delete S;
  delete RC;
  delete SC;
  delete A;
  delete L;
  delete V;
  delete F;
  delete P;
  delete R;
  delete Py;

  std::cout << " Program Completed Successfully\n";

  return 0;
}