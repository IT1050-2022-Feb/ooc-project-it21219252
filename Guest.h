//created by IT21218644
#ifndef GUEST_H
#define GUEST_H

class Guest {
  protected:
    char IP_address [15];
  public: 
    Guest();
    Guest(const char tIP_address[]);
    void Register();
    ~Guest();
};

#endif