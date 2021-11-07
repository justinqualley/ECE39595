#include <iostream>
#include "RedHeadDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

RedHeadDuck::RedHeadDuck( ) {
   quackBehavior = shared_ptr<QuackBehavior>(new Quack( ));
   flyBehavior = shared_ptr<FlyBehavior>(new FlyWithWings( ));
}

void RedHeadDuck::display( ) {
   std::cout << "I’m a real redheaded duck" << std::endl;
}
RedHeadDuck::~RedHeadDuck(){}
