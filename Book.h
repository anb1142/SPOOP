#pragma once
#include "libraries.h"
class Book
{
protected:
  string Title;
  string authorName;

public:
  Book(string Title, string authorName);
  string getTitle();
  void setTitle(string Title);
  string getAuthorName();
  void setAuthorName(string authorName);
  virtual void printDescription();
};
