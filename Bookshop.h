#include "AudioBook.h"
class Bookshop
{
private:
  int noOfBooksAdded = 0;

public:
  AudioBook *bookCollection[];
  Bookshop();
  void addBook(Book book);
  void addBook(AudioBook book);
  void listBooks();
  ~Bookshop();
};