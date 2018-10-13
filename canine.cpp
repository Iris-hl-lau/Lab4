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

Canine::Canine(const Canine&){}
Canine::~Canine(){}
void Canine::sleep() {cout << "Canine " << Canine::id << " is sleeping.\n";}
void Canine::eat() {cout << "Canine " << Canine::id << " is eating.\n";}
void Canine::hunt() {cout << "Canine " << Canine::id << " is hunting.\n";}
ostream& Canine::operator<<(ostream& os, const Canine&)
{
    os << "X-Coordinate: " << locationX << " Y-Coordinate: " << locationY;
    return os;
}
