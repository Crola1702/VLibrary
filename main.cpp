#include <iostream>

#include "Classes/Book.h"
#include "Classes/Category.h"
#include "Classes/Library.h"

void printMenu() {
    std::cout << "\nWelcome!!\n";
    std::cout << "1. Book by name\n";
    std::cout << "2. Books by category\n";
    std::cout << "3. Books by author name \n";
    std::cout << "4. Average rating (total books)\n";
    std::cout << "5. Average rating by category\n";
    std::cout << "6. Author's average rating\n";
    std::cout << "7. Author's categories\n";
    std::cout << "8. Category with the most books\n";
    std::cout << "9. Category with the best rating\n";
    std::cout << "0. Exit\n";
    std::cout << "Please select an option:  ";
}

// Helper function
void printBooks(std::vector<Book> books) {
    for (auto book : books) {
        std::cout << book.toString() << "\n";
    }
    std::cout << "Number of books: " << books.size() << "\n";
}

// Option execution

void bookByName(Library &lib) {
    std::string bookName;
    std::cout << "Enter book title:\n";
    std::getline(std::cin, bookName);
    std::cout << lib.getBookByName(bookName).toString();
}

void booksByCategory(Library &lib) {
    std::string categoryName;
    std::cout << "Enter category name:\n";
    std::getline(std::cin, categoryName);
    printBooks(lib.getBooksByCategory(categoryName));
}

void booksByAuthor(Library &lib) {
    std::string authorName;
    std::cout << "Enter author name: ";
    std::getline(std::cin, authorName);
    printBooks(lib.getAuthorBooks(authorName));
}

void averageRatingTotal(Library &lib) {
    std::cout << "Total average rating: " << lib.getAverageRatingTotal() << "\n";
}

void averageRatingByCategory(Library &lib) {
    std::string categoryName;
    std::cout << "Enter category name: ";
    std::getline(std::cin, categoryName);
    std::cout << "Average rating: " << lib.getAverageRatingByCategory(categoryName) << "\n";
}

void authorAverageRating(Library &lib) {
    std::string authorName;
    std::cout << "Enter author's name: ";
    std::getline(std::cin, authorName);
    std::cout << "Average rating: " << lib.getAuthorsAverageRating(authorName);
}

void authorCategories(Library &lib) {
    std::string authorName;
    std::cout << "Enter author's name: ";
    std::getline(std::cin, authorName);
    std::vector<Category> categories = lib.getAuthorCategories(authorName);
    for (auto category : categories) {
        std::cout << category.toString() << "\n";
    }
    std::cout << "Number of categories: " << categories.size() << "\n";
}

void mostBooksCategory(Library &lib) {
    std::cout << "Most book category: " << lib.getCategoryWithMostBooks().toString();
}

void bestRatedCategory(Library &lib) {
    std::cout << "Best rated category: " << lib.getCategoryWithBestRating().toString();
}

int main() {

    std::string booksFileName = "books.csv";
    std::string categoriesFileName = "categories.csv";

    Library lib = Library(categoriesFileName, booksFileName);

    /*
    for (auto book : lib.getCatalog()) {
        std::cout << book.toString() << "\n";
    }
     */

    int option;
    do {
        printMenu();
        std::cin >> option;
        std::cin.ignore();
        switch (option) {
            case 1:
                bookByName(lib);
                break;
            case 2:
                booksByCategory(lib);
                break;
            case 3:
                booksByAuthor(lib);
                break;
            case 4:
                averageRatingTotal(lib);
                break;
            case 5:
                averageRatingByCategory(lib);
                break;
            case 6:
                authorAverageRating(lib);
                break;
            case 7:
                authorCategories(lib);
                break;
            case 8:
                mostBooksCategory(lib);
                break;
            case 9:
                bestRatedCategory(lib);
                break;
        }
    } while (option);
    return 0;
}
