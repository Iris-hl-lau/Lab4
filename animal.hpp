//
// Created by Iris L on 2018-10-12.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#include <iostream>
using namespace std;

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
    Animal(int age, double, double);
    virtual void move(double, double);
    Animal(const Animal&);
    virtual ~Animal();
    virtual void sleep();
    virtual void eat();
    friend ostream& operator<<(ostream&, const Animal&);
};

#endif //LAB4_ANIMAL_HPP
