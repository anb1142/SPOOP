#include "Bookshop.h"

Bookshop::Bookshop()
{
  *bookCollection = static_cast<AudioBook *>(malloc(3 * sizeof(AudioBook)));
}

void Bookshop::addBook(Book book)
{
  new (&bookCollection[noOfBooksAdded]) Book(book.getTitle(), book.getAuthorName());
  noOfBooksAdded++;
}
void Bookshop::addBook(AudioBook book)
{
  new (&bookCollection[this->noOfBooksAdded]) Book(book.getTitle(), book.getAuthorName());
  noOfBooksAdded++;
}

Bookshop::~Bookshop()
{
  delete[] *bookCollection;
}
void Bookshop::listBooks()
{
  for (int i = 0; i < 3; i++)
  {

    cout
        << i + 1 << ") " << (*bookCollection)[i].getTitle() << endl;
  }
}
