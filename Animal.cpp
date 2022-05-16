#include "Animal.h"

void Animal::AddFriend(IAnimal* other) {
    if (this != other) {
        friends_.push_back(other);
        dynamic_cast<Animal*>(other)->friends_.push_back(this);
    }
}

std::string Animal::GetName() {
    return name_;
}

std::vector<IAnimal *> Animal::GetFriends() {
    return friends_;
}

std::string Animal::Type() {
    return "Unknown animal";
}

bool Animal::operator==(const Animal &other) {
    return this->name_ == other.name_;
}

bool Animal::operator<(const Animal &other) {
    return this->name_ < other.name_;
}
