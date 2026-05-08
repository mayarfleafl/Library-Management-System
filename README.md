# Library Management System

A simple console-based Library Management System built with C++ using Object-Oriented Programming.

## Description

This project allows users to manage books in a small library system through a console menu.  
Each book has an ID, title, author, and status. The status shows whether the book is available or borrowed.

## Features

- Add a new book
- Remove a book by ID
- Borrow a book
- Return a borrowed book
- Display all books
- Track book availability status

## Technologies Used

- C++
- Object-Oriented Programming
- STL Vector
- Header and source files

## Project Structure

```text
Library-Management-System/
│
├── .gitignore
├── Book.cpp
├── Book.h
├── Library.cpp
├── Library.h
├── main.cpp
└── README.md
```

## OOP Concepts Used

- Classes and Objects
- Encapsulation
- Constructors
- Member Functions
- Separation of code into header and source files

## How to Run

### Compile

```bash
g++ main.cpp Book.cpp Library.cpp -o library
```

### Run

```bash
./library
```

On Windows, you can run:

```bash
library.exe
```

## Sample Menu

```text
****** Library Menu ******
1. Add Book
2. Remove Book
3. Borrow Book
4. Return Book
5. Show All Books
0. Exit
```

## Future Improvements

- Add search by title or author
- Prevent duplicate book IDs
- Save books to a file
- Load books from a file
- Add input validation
- Add admin/user roles

## Author

Mayar Fleafl
