#ifndef COURSEWORK_ANIMAL_H
#define COURSEWORK_ANIMAL_H

#include <string>
#include <set>
#include <utility>
#include <vector>
#include <unordered_set>

class Animal {
public:
    explicit Animal(std::string  name) : name_(std::move(name)) {};

    std::string GetName();

    std::vector<std::string> GetFriends();

    virtual std::string Type();
    bool operator ==(const Animal& other);
    bool operator < (const Animal& other);
    void AddFriend(Animal other);


protected:
    std::vector<Animal> friends_;
    std::string name_;
};

#endif //COURSEWORK_ANIMAL_H
