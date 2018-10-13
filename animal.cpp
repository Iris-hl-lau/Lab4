//
// Created by Iris L on 2018-10-12.
//

#include "animal.hpp"
//Defining what an Animal can do
long Animal::counter = 0;

Animal::Animal()
{
    id = counter++;
    alive = true;
    age = 0;
    locationX = 0;
    locationY = 0;
}

Animal::Animal(int age, double xCoord, double yCoord)
{
    id = counter++;
    alive = true;
    this->age = age;
    locationX = xCoord;
    locationY = yCoord;
}

void Animal::move(double xCoord, double yCoord)
{
    locationX = xCoord;
    locationY = yCoord;
}

Animal::Animal(const Animal& animal) {}
Animal::~Animal(){}
void Animal::sleep(){cout << "Animal " << id << " is sleeping.\n";}
void Animal::eat(){cout << "Animal " << id << " is eating.\n";}
ostream& operator<<(ostream& os, const Animal& animal)
{
    os << "Animal: " << animal.id << "\n";
    os << "Alive: " << animal.alive << "\n";
    os << "Age: " << animal.age << "\n";
    os << "X-Coordinate: " << animal.locationX << " Y-Coordinate: " << animal.locationY << "\n\n";
    return os;
}


