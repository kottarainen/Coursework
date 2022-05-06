#include "Animal.h"

void Animal::AddFriend(Animal other) {
    if (this->name_ != other.name_) {
        bool exist = false;
        for(const auto& i : friends_) {
            if (i.name_ == other.name_) {
                exist = true;
                break;
            }
        }
        if (!exist) {
            friends_.push_back(other);
            other.friends_.push_back(*this);
        }
    }
}

std::string Animal::GetName() {
    return name_;
}

std::vector<std::string> Animal::GetFriends() {
    std::vector<std::string> friends;
    for(auto i : friends_) {
        friends.push_back(i.GetName());
    }
    return friends;
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
