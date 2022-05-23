//
// Created by agali on 20/05/22.
//

#ifndef BOOKSTORE_IMAGE_H
#define BOOKSTORE_IMAGE_H

#include <string>

class Image {
private:
    std::string filePath;
    int width;
    int height;
public:
    Image(): filePath(""), width(0), height(0) {};
    Image(std::string filePath): filePath(filePath){ /* TODO - Download file from the internet */}
    std::string getPath() {return filePath;}
    int getWidth() {return width;}
    int getHeight() {return height;}
};


#endif //BOOKSTORE_IMAGE_H
