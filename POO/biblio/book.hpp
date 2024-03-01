#include "Document.hpp"
#pragma once

class Book : public Document {
private:
    int numberOfPages;

public:
    Book(std::string title, std::string authors, int yearOfPublication, std::string identifierCode, int numberOfPages);

    std::string getTitle() const;
    std::string getAuthors() const;
    int getYearOfPublication() const;
    std::string getIdentifierCode() const;

    void display() const;
    bool isBorrowable() const;
};
