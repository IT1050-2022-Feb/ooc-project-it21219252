//Created by IT21219252
#ifndef LANGUAGE_H
#define LANGUAGE_H


class Language {
  private:
    char languageName[15];
  public:
    Language();
    Language(const char tLanguageName[]);
    void setLanguageName();
    ~Language();
};

#endif