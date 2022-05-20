//Created by IT21219252
#include "Language.h"
#include <cstring>

Language::Language() {
  strcpy(languageName,"");
}

Language::Language(const char tLanguageName[]) {
  strcpy(languageName,tLanguageName);
}

void Language::setLanguageName() {
  
}

Language::~Language() {
  
}