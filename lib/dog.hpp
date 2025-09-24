
#pragma once
#include <string>
#include <iostream>

class Dog{
public:
    Dog();
    Dog(int age, std::string name, int numBark);
    ~Dog();
    void bark();
    void SetAge(int age);
    int GetAge();
    void SetName(std::string name);
    std::string GetName();
    void SetNumBark(int numBark);
    int GetNumBark();

    void GetDogInfo();

private:
    int age;
    std::string name;
    int numBark;

};   