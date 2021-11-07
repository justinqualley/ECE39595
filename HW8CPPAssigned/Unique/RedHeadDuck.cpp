#include <iostream>
#include "RedHeadDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

RedHeadDuck::RedHeadDuck( ) {
   quackBehavior = unique_ptr<QuackBehavior>(new Quack( ));
   flyBehavior = unique_ptr<FlyBehavior>(new FlyWithWings( ));
}

void RedHeadDuck::display( ) {
   std::cout << "I’m a real redheaded duck" << std::endl;
}
RedHeadDuck::~RedHeadDuck(){}
