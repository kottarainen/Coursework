#include <iostream>

#include "Eagle.h"

int main() {
    Animal animal("Bne");
    std::cout << animal.Type() << '\n';

    Eagle eagle("asdd");
    std::cout << eagle.Type() << '\n';

    eagle.AddFriend(static_cast<IAnimal*>(&animal));

    for(auto i : eagle.GetFriends()) {
        std::cout << i << ' ';
    }
    return 0;
}
