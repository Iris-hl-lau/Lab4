//
// Created by Iris L on 2018-10-12.
//

#pragma once

#include <iostream>
#include "animal.hpp"
using namespace std;
//Characteristics of a Bird which is an Animal
class Bird : public Animal {
protected:
    double locationV;
public:
    Bird();
    Bird(int, double, double, double);
    void move(double, double, double);
    Bird(const Animal&);
    virtual ~Bird();
    void sleep()override;
    void eat() override;
    friend ostream& operator<<(ostream& os, const Bird& bird);
};

//LAB4_BIRD_HPP
