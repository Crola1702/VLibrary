//
// Created by agali on 20/05/22.
//

#include <sstream>

#include "Category.h"

double Category::averageRating() {
    double ratingSum = 0;
    int size = books.size();
    for (int i=0 ; i<size ; i++) {
        ratingSum += books[i].getRating();
    }
    return ratingSum/size;
}

bool Category::isAuthorBook(std::string author) {
    for (int i=0 ; i<books.size() ; i++) {
        if (author == books[i].getAuthor()) {
            return true;
        }
    }
    return false;
}

std::vector<Book> Category::getAuthorBooks(std::string author) {
    std::vector<Book> authorBooks;
    for (int i=0 ; i<books.size() ; i++) {
        if (author == books[i].getAuthor()) {
            authorBooks.push_back(books[i]);
        }
    }
    return authorBooks;
}

std::string Category::toString() {
    std::stringstream ss;
    ss << "[Name: " << name;
    ss << "; Fiction: " << fiction;
    ss << "; NumberOfBooks: " << books.size() << "]";
    return ss.str();
}

bool Category::equals(Category other) {
    return other.getName()==name && other.getBooks().size()==books.size() && other.isFiction()==fiction;
}
