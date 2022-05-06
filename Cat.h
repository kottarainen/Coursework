#ifndef COURSEWORK_CAT_H
#define COURSEWORK_CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    explicit Cat(std::string name) : Animal(std::move(name)) {};
    std::string Type() override {
        return "Unknown cat";
    }

protected:
    int jumping_height_ = 20;
};

#endif //COURSEWORK_CAT_H
