#include "Book.hpp"
#include <iostream>

Book::Book(std::string title, std::string authors, int yearOfPublication, std::string identifierCode, int numberOfPages)
    : Document(title, authors, yearOfPublication, identifierCode), numberOfPages(numberOfPages) {}

void Book::display() const {
    std::cout << "Title: " << getTitle() << "\n"
              << "Authors: " << getAuthors() << "\n"
              << "Year of Publication: " << getYearOfPublication() << "\n"
              << "Identifier Code: " << getIdentifierCode() << "\n"
              << "Number of Pages: " << numberOfPages << std::endl;
}

bool Book::isBorrowable() const {
    return true;