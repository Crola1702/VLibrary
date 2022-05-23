//
// Created by agali on 20/05/22.
//

#include "Book.h"
#include "Category.h"
#include <sstream>

std::string Book::toString() {
    std::stringstream ss;
    ss << "[Title: " << title;
    ss << "; Author: " << author;
    ss << "; Category: " << category->getName();
    ss << "; Rating: " << rating << "]";
    return ss.str();
}

bool Book::equals(Book other) {
    return other.getTitle()==title && other.getAuthor()==author && other.getRating()==rating && other.getCategory()->equals(*category);
}
