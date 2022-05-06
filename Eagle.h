#ifndef COURSEWORK_EAGLE_H
#define COURSEWORK_EAGLE_H

#include "Bird.h"

class Eagle : public Bird {
public:
    explicit Eagle(const std::string& name) : Bird(name) {};
    std::string Type() override {
        return "Eagle";
    }

    int GetSpeed() const {
        return speed_;
    }

private:
    int speed_ = 100;
};

#endif //COURSEWORK_EAGLE_H
