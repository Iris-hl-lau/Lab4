//
// Created by Iris L on 2018-10-12.
//

#include "bird.hpp"
//Defining what a Bird can do
Bird::Bird() {}
Bird::Bird(int age, double xCoord, double yCoord, double vCoord)
{
    this->age = age;
    locationX = xCoord;
    locationY = yCoord;
    locationV = vCoord;
}

void Bird::move(double xCoord, double yCoord, double vCoord)
{
    locationX = xCoord;
    locationY = yCoord;
    locationV = vCoord;
}

Bird::Bird(const Bird& bird) {}
Bird::~Bird() {}
void Bird::sleep() {cout << "Bird " << Bird::id << " is sleeping.\n";}
void Bird::eat() {cout << "Bird " << Bird::id << " is eating.\n";}
ostream& Bird::operator<<(ostream& os, const Bird& bird)
{
    os << "X-Coordinate: " << locationX << " Y-Coordinate: " << locationY << " V-Coordinate: " << locationV;
    return os;
}