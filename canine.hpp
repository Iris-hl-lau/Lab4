//
// Created by Iris L on 2018-10-12.
//

#pragma once
#include "animal.hpp"
//Characteristics of a Canine which is an Animal
class Canine : public Animal
{
public:
    Canine();
    Canine(int, double, double);
    //void move(double, double) override;
    Canine(const Animal&);
    virtual ~Canine();
    void sleep()override;
    void eat() override;
    virtual void hunt();
    friend ostream& operator<<(ostream&, const Canine&);
};
//LAB4_CANINE_HPP
