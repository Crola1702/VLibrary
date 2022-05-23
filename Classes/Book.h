//
// Created by agali on 20/05/22.
//

#ifndef BOOKSTORE_BOOK_H
#define BOOKSTORE_BOOK_H

#include <string>

#include "Image.h"

class Category;

class Book {
private:
    std::string title;
    std::string author;
    double rating;
    Category* category;
    Image coverPage;
public:
    Book() {title=""; author="";}
    Book(std::string title, std::string author, double rating, Category *category, std::string coverPagePath = ""): title(title), author(author), rating(rating), category(category),
                                                                               coverPage(Image(coverPagePath)) {}
    double getRating() { return rating; }
    std::string getAuthor() { return author; }
    std::string getTitle() { return title; }
    Category* getCategory() { return category; }
    void setCoverPage(Image coverPage)  { this->coverPage = coverPage; }
    bool hasCoverPage() { return coverPage.getPath().empty(); }
    std::string toString();
    bool equals(Book other);
    bool isNull() { return title.empty() && author.empty(); }
};


#endif //BOOKSTORE_BOOK_H
