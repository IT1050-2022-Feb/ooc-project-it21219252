//created by IT21217654
#ifndef ADMIN_H
#define ADMIN_H

class Admin {
private:
     char adminID[5];
     char adminPassword[50];
     char adminUsername[50];
public:
     Admin();
     Admin(const char tAdminID[], const char tAdminPassword[],const char tAdminUsername[]);
     void Login();
     void Logout(); 
     void ViewAccount();
     ~Admin();
};  

#endif