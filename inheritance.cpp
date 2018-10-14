#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {
    //Using default constructor
    Animal animal;
    Bird bird;
    Canine canine;
    Animal* a = &animal;
    Animal* b = &bird;
    Animal* c = &canine;

    //Testing Animal methods
    a->eat();
    a->sleep();
    a->move(4,5);

    //Testing Bird functions
    b->eat();
    b->sleep();
    b->move(4,5);
    ((Bird&)*b).move(2, 4, 6); //Casted because Animal does not
                                    // have a three parameter move function

    //Testing Canine functions
    c->eat();
    c->sleep();
    c->move(4,5);
    ((Canine&)*c).hunt();//Casted because Animal does not
                              // have a hunt function

    //Testing the overloaded output stream
    cout << *a;
    cout << ((Bird&)*b);
    cout << ((Canine&)*c);

    //Using other constructor
    Animal animal_two(5, 4, 5);
    Bird bird_two(7, 6, 7, 8);
    Canine canine_two(2, 3, 2);
    Animal* a_two = &animal_two;
    Animal* b_two = &bird_two;
    Animal* c_two = &canine_two;

    //Testing the overloaded output stream
    cout << *a_two;
    cout << ((Bird&)*b_two);
    cout << ((Canine&)*c_two);

}