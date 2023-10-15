#include "Book.h"

Book::Book(string Title, string authorName)
{
  this->Title = Title;
  this->authorName = authorName;
}
string Book::getTitle()
{
  return this->Title;
}

void Book::setTitle(string Title)
{
  this->Title = Title;
}

string Book::getAuthorName()
{
  return this->authorName;
}

void Book::setAuthorName(string authorName)
{
  this->authorName = authorName;
}
void Book::printDescription()
{
  cout << this->Title << " is written by " << this->authorName << endl;
}