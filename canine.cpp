//
// Created by Iris L on 2018-10-12.
//

#include "canine.hpp"
//Defining what a Canine can do
Canine::Canine() {}
Canine::Canine(int age, double xCoord, double yCoord)
{
    this->age = age;
    locationX = xCoord;
    locationY = yCoord;
}

Canine::Canine(const Animal& animal){}
Canine::~Canine(){}
void Canine::sleep() {cout << "Canine " << Canine::id << " is sleeping.\n";}
void Canine::eat() {cout << "Canine " << Canine::id << " is eating.\n";}
void Canine::hunt() {cout << "Canine " << Canine::id << " is hunting.\n";}
ostream& operator<<(ostream& os, const Canine& canine)
{
    os << "Canine: " << canine.id << "\n";
    os << "Alive: " << canine.alive << "\n";
    os << "Age: " << canine.age << "\n";
    os << "X-Coordinate: " << canine.locationX << " Y-Coordinate: " << canine.locationY << "\n\n";
    return os;
}
