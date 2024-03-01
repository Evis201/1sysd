#include <string>

class Document {
private:
    std::string title;
    std::string authors;
    int yearOfPublication;
    std::string identifierCode;

public:
    Document(std::string title, std::string authors, int yearOfPublication, std::string identifierCode);

    virtual void display() const = 0;
    virtual bool isBorrowable() const = 0;
};
