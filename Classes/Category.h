//
// Created by agali on 20/05/22.
//

#ifndef BOOKSTORE_CATEGORY_H
#define BOOKSTORE_CATEGORY_H

#include <string>
#include <vector>

#include "Book.h"

class Category {
private:
    std::string name;
    bool fiction;
    std::vector<Book> books;
public:
    Category() { name=""; fiction=false; }
    Category(std::string name, bool fiction): name(name), fiction(fiction) {}
    std::string getName() {return name;}
    bool isFiction() {return fiction;}
    std::vector<Book> getBooks() {return books;}
    void addBook(Book* book) {books.push_back(*book);}
    int countBooks() {return books.size();}
    double averageRating();
    bool isAuthorBook(std::string author);
    std::vector<Book> getAuthorBooks(std::string author);
    std::string toString();
    bool equals(Category other);
    bool isNull() {return name.empty();}
};


#endif //BOOKSTORE_CATEGORY_H
