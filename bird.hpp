//
// Created by Iris L on 2018-10-12.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP

#include <iostream>
#include "animal.cpp"
using namespace std;

class Bird : public Animal {
protected:
    double locationV;
public:
    Bird();
    Bird(int, double, double, double);
    void move(double, double, double);
    Bird(const Bird&);
    ~Bird();
    void sleep()override;
    void eat() override;
    friend ostream& operator<<(ostream& os, const Bird& bird);
};

#endif //LAB4_BIRD_HPP
