#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"
#include "Bookshop.h"
int main()
{

  Bookshop s1 = Bookshop();
  cout << sizeof(s1);

  for (int i = 0; i < 3; i++)
  {
    string title, author, voice;
    cout << "What type:" << endl
         << "1. Audio" << endl
         << "2. Voice";
    int type;
    cin >> type;
    getline(cin, title);
    getline(cin, author);
    if (type == 2)
    {
      getline(cin, voice);
      s1.addBook(AudioBook(title, author, voice));
    }
    else
    {
      s1.addBook(Book(title, author));
    }
  }

  s1.listBooks();
  return 0;
}