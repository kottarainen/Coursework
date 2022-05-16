#ifndef COURSEWORK_ANIMAL_H
#define COURSEWORK_ANIMAL_H

#include <string>
#include <set>
#include <utility>
#include <vector>
#include <unordered_set>

class Animal;

class IAnimal {
public:
    virtual std::string GetName() = 0;
    virtual std::vector<IAnimal*> GetFriends() = 0;

    virtual std::string Type() = 0;
    virtual  bool operator ==(const Animal& other) = 0;
    virtual  bool operator < (const Animal& other) = 0;
    virtual  void AddFriend(IAnimal* other) = 0;
};

class Animal : public IAnimal{
public:
    explicit Animal(std::string  name) : name_(std::move(name)) {};

    std::string GetName() override;

    std::vector<IAnimal*> GetFriends() override;

    bool operator ==(const Animal& other) override;
    bool operator < (const Animal& other) override;
    void AddFriend(IAnimal* other) override;
    std::string Type() override;

protected:
    std::vector<IAnimal*> friends_;
    std::string name_;
};
#endif //COURSEWORK_ANIMAL_H
