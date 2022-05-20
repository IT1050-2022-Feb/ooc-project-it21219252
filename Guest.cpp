//created by IT21218644
#include "Guest.h"
#include <cstring>

Guest::Guest()
{
  strcpy( IP_address,"");
}

Guest::Guest(const char tIP_Address[])
{
  strcpy( IP_address,tIP_Address);
}

void Guest::Register()
{
  
}

Guest::~Guest() {
  
}