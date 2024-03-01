#include <string>
#include "Document.hpp"

Document::Document(std::string title, std::string authors, int yearOfPublication, std::string identifierCode)
    : title(title), authors(authors), yearOfPublication(yearOfPublication), identifierCode(identifierCode) {}