#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

using namespace std;

class Library {
private:
    vector<Book> books;

public:
    void addBook(int id, string title, string author);

    void removeBook(int ID);

    void borrow(int ID);

    void returnBook(int ID);

    void showBooks();
};

#endif