#ifndef COURSEWORK_BIRD_H
#define COURSEWORK_BIRD_H

#include "Animal.h"

class Bird : public Animal {
public:
    explicit Bird(std::string name) : Animal(std::move(name)) {};
    std::string Type() override {
        return "Unknown Bird";
    }
};

#endif //COURSEWORK_BIRD_H
