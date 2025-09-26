#include <iostream>
#include "dog.hpp"

extern "C" void hello_from_other();
int main()
{
    std::cout << "Hello, World!" << std::endl;
    Dog dog1(3, "Doggy", 5);
    dog1.GetDogInfo();
    dog1.bark();

#if VERSION == 1
    std::cout << "Dog bark two times" << std::endl;
#else
    std::cout << "Nothing happen" << std::endl;
#endif
    hello_from_other();
    return 0;
}