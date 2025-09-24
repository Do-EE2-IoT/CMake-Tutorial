#include "dog.hpp"

Dog::Dog(){
    age = 0;
    name = "No name";
    numBark = 1;
}

void Dog::SetAge(int age){
    this->age = age;
}
int Dog::GetAge(){
    return this->age;
}
void Dog::SetName(std::string name){
    this->name = name;
}
std::string Dog::GetName(){
    return this->name;
}

void Dog::SetNumBark(int numBark){
    this->numBark = numBark;
}
int Dog::GetNumBark(){
    return this->numBark;
}
Dog::~Dog(){
    std::cout << "Dog " << this->GetName() << " is destroyed." << std::endl;
}

Dog::Dog(int age, std::string name, int numBark){
    this->SetAge(age);
    this->SetName(name);
    this->SetNumBark(numBark);
}

void Dog::GetDogInfo(){
    std::cout << "Dog's name: " << this->GetName() << std::endl;
    std::cout << "Dog's age: " << this->GetAge() << std::endl;
    std::cout << "Dog's numBark: " << this->GetNumBark() << std::endl;
}

void Dog::bark(){
    for(int i = 0; i < this->GetNumBark(); i++){
        std::cout << "Woof! ";
    }
    std::cout << std::endl;
}