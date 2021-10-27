#include<iostream>
#include "PekinDuck.h"
#include "Quack.h"
#include "FlysPoorly.h"
#include "LaysEggsNotBroody.h"

PekinDuck::PekinDuck(){
    quackBehavior = new Quack( );
    flyBehavior = new FlysPoorly( );
    layBehavior = new LaysEggsNotBroody();
}

void PekinDuck::display(){
    std::cout << "I'm a real Pekin Duck" << std::endl;
}

