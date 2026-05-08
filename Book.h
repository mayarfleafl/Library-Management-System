#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    int id;
    string title, author, status;

public:
    Book(int Id, string Title, string Author);

    int getId() const;
    string getStatus() const;

    void setStatus(string newStatus);

    void showBook() const;
};

#endif