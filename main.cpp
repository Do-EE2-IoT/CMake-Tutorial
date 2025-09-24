#include <iostream>
#include "dog.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Dog dog1(3, "Doggy", 5);
    dog1.GetDogInfo();
    dog1.bark();
    return 0;
}