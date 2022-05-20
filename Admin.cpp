// created by IT21217654
#include "Admin.h"
#include <cstring>

Admin::Admin()
{
  strcpy(adminID,"");
  strcpy(adminUsername,"");
  strcpy(adminPassword,"");
}
Admin::Admin(const char tAdminID[], const char tAdminPassword[],const char tAdminUsername[])
{
  strcpy(adminID,tAdminID);
  strcpy(adminPassword,tAdminPassword);
  strcpy(adminUsername,tAdminUsername);
  }

void Admin::Login(){
}

void Admin::Logout(){
}

void Admin::ViewAccount(){
}

Admin::~Admin(){
}