//
// Created by agali on 20/05/22.
//

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "Library.h"

void Library::loadCategories(std::string fileName) {
    std::ifstream file("../Data/"+fileName);

    if (!file.is_open()) {
        std::cout << "Could not open categories file\n";
        return;
    }

    std::vector<std::string> category;
    std::string line, word;
    while (getline(file, line)) {
        category.clear();
        std::stringstream str(line);
        while (getline(str, word, ',')) {
            category.push_back(word);
        }
        categories[category[0]] = (Category(category[0], category[1] == "True"));
    }
    std::cout << categories.size() << " categories loaded.\n";
}

void Library::loadBooks(std::string fileName) {
    std::ifstream file ("../Data/"+fileName);

    if (!file.is_open()) {
        std::cout << "Could not open books file\n";
        return;
    }

    std::vector<std::string> book;
    std::string line, word;
    while (getline(file, line)) {
        book.clear();
        std::stringstream str(line);
        while (getline(str, word, ',')) {
            book.push_back(word);
        }
        if (!(book[0].empty() or book[1].empty() or book[2].empty() or book[3].empty())) {
            Category* category = &categories[book[3]];
            Book book1 = Book(book[0], book[1], stod(book[2]), category, book[4]);
            category->addBook(&book1);
            catalog.push_back(book1);
        }
    }
    std::cout << catalog.size() << " books loaded";
}

Category Library::searchCategory(std::string categoryName) {
    return categories[categoryName];
}


Library::Library(std::string categoryFile, std::string catalogFile) {
    loadCategories(categoryFile);
    loadBooks(catalogFile);
}

Library::~Library() {
    // TODO
}

std::vector<Book> Library::getBooksByCategory(std::string categoryName) {
    return categories[categoryName].getBooks();
}

Book Library::getBookByName(std::string bookTitle) {
    for (auto book : catalog) {
        if (book.getTitle() == bookTitle) {
            return book;
        }
    }
    return {};
}

std::vector<Book> Library::getAuthorBooks(std::string bookAuthor) {
    std::vector<Book> books;
    for (auto book : catalog) {
        if (book.getAuthor() == bookAuthor) {
            books.push_back(book);
        }
    }
    return books;
}

std::vector<Category> Library::getCategories() {
    std::vector<Category> categoriesList;
    for (auto category : categories) {
        categoriesList.push_back(category.second);
    }
    return categoriesList;
}

std::vector<Category> Library::getAuthorCategories(std::string bookAuthor) {
    std::vector<Category> authorCategories;
    for (auto book : catalog) {
        if (book.getAuthor() == bookAuthor) {
            authorCategories.push_back(*book.getCategory());
        }
    }
    return authorCategories;
}

double Library::getAverageRatingTotal() {
    double sum = 0;
    for (auto book : catalog) {
        sum += book.getRating();
    }
    return sum/catalog.size();
}

double Library::getAverageRatingByCategory(std::string categoryName) {
    return searchCategory(categoryName).averageRating();
}

double Library::getAuthorsAverageRating(std::string authorName) {
    double sum = 0;
    int count = 0;
    for (auto book : catalog) {
        if (book.getAuthor() == authorName) {
            sum += book.getRating();
            count++;
        }
    }
    return (!count) ? 0 : sum/count;
}

Category Library::getCategoryWithMostBooks() {
    int maxBooks = 0;
    Category maxCategory;
    for (auto pair : categories) {
        if (pair.second.countBooks() > maxBooks) {
            maxBooks = pair.second.countBooks();
            maxCategory = pair.second;
        }
    }
    return maxCategory;
}

Category Library::getCategoryWithBestRating() {
    int maxRating = 0;
    Category maxCategory;
    for (auto pair : categories) {
        if (pair.second.averageRating() > maxRating) {
            maxRating = pair.second.countBooks();
            maxCategory = pair.second;
        }
    }
    return maxCategory;
}




