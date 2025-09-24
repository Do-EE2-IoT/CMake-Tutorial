#include <iostream>
#include "dog.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Dog dog1(3, "Doggy", 5);
    dog1.GetDogInfo();
    dog1.bark();

    #if VERSION == 1
        std::cout << "Dog bark two times" << std::endl;
    #else
        std::cout << "Nothing happen" << std::endl;
    #endif

    return 0;
}