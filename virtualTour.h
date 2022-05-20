//created by IT21218644
#include "Admin.h"
#include "RegisteredCustomer.h"


class virtualTour {
private:
      int virtualTourNumber;
public: 
      virtualTour();
      virtualTour(int tVirtualTourNumber);
      void requestVirtualTour(registeredCustomer *rCustomer);
      void acceptVirtualTour(Admin *admin);
      ~virtualTour();
};
