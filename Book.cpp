#include "Book.h"

Book::Book(int Id, string Title, string Author) {
    id = Id;
    title = Title;
    author = Author;
    status = "Available";
}

int Book::getId() const {
    return id;
}

string Book::getStatus() const {
    return status;
}

void Book::setStatus(string newStatus) {
    status = newStatus;
}

void Book::showBook() const {
    cout << "Id: " << id
         << "\nTitle: " << title
         << "\nAuthor: " << author
         << "\nStatus: " << status << endl;
}