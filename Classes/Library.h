//
// Created by agali on 20/05/22.
//

#ifndef BOOKSTORE_LIBRARY_H
#define BOOKSTORE_LIBRARY_H

#include <string>
#include <vector>
#include <unordered_map>

#include "Book.h"
#include "Category.h"

class Library {
private:
    std::vector<Book> catalog;
    std::unordered_map<std::string, Category> categories;

    void loadCategories(std::string fileName);
    void loadBooks(std::string fileName);
    Category searchCategory(std::string categoryName);
public:
    Library(std::string categoryFile, std::string catalogFile);
    ~Library();

    std::vector<Book> getCatalog() { return catalog; }
    std::vector<Category> getCategories();

    Book getBookByName(std::string bookTitle);
    std::vector<Book> getBooksByCategory(std::string categoryName);
    std::vector<Book> getAuthorBooks(std::string bookAuthor);
    double getAverageRatingTotal();
    double getAverageRatingByCategory(std::string categoryName);
    double getAuthorsAverageRating(std::string authorName);
    std::vector<Category> getAuthorCategories(std::string bookAuthor);
    Category getCategoryWithMostBooks();
    Category getCategoryWithBestRating();

};


#endif //BOOKSTORE_LIBRARY_H
