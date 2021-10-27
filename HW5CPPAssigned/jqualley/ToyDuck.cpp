#include<iostream>
#include "LaysToyEggs.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include "ToyDuck.h"


ToyDuck::ToyDuck(){
    flyBehavior = new FlyNoWay;
    quackBehavior = new Quack;
    layBehavior = new LaysToyEggs;
}

void ToyDuck::display(){
    std::cout << "I'm a toy duck" << std::endl;
}
