#include <iostream>
#include "Library.h"

using namespace std;


int main(){
    Library lib;
    int choice, id;
    string title, author;

    do{
        cout << "\n****** Library Menu ******\n";
        cout << "Enter your choice: \n";
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. Borrow Book\n";
        cout << "4. Return Book\n";
        cout << "5. Show All Books\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter book id: ";
                cin >> id;
                cin.ignore();

                cout << "Enter book title: ";
                getline(cin, title);

                cout << "Enter author name: ";
                getline(cin, author);

                lib.addBook(id, title, author);
                break;

            case 2:
                cout << "Enter book id to remove: ";
                cin >> id;
                lib.removeBook(id);
                break;

            case 3:
                cout << "Enter book id to borrow: ";
                cin >> id;
                lib.borrow(id);
                break;

            case 4:
                cout << "Enter book id to return: ";
                cin >> id;
                lib.returnBook(id);
                break;

            case 5:
                lib.showBooks();
                break;

            case 0:
                cout << "Program ended." << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    }while(choice != 0);

    return 0;
}