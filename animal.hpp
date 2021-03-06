//
// Created by Iris L on 2018-10-12.
//

#pragma once
#include <iostream>
using namespace std;
//Characteristics of an Animal
class Animal
{
protected:
    int age;
    long id;
    bool alive;
    double locationX, locationY;
public:
    static long counter;
    Animal();
    Animal(int, double, double);
    virtual void move(double, double);
    Animal(const Animal&);
    virtual ~Animal();
    virtual void sleep();
    virtual void eat();
    friend ostream& operator<<(ostream&, const Animal&);
};

//LAB4_ANIMAL_HPP
