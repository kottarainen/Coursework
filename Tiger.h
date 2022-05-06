#ifndef COURSEWORK_TIGER_H
#define COURSEWORK_TIGER_H

#include "Cat.h"

class Tiger : public Cat {
    Tiger(std::string name) : Cat(std::move(name)) {
        jumping_height_ = 10;
    }

    std::string Type() override {
        return "Tiger";
    }
};

#endif //COURSEWORK_TIGER_H
