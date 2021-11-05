#include <iostream>
#include "RedHeadDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

RedHeadDuck::RedHeadDuck( ) {
   quackBehavior = shared_ptr<Quack>(new Quack( ));
   flyBehavior = shared_ptr<FlyWithWings>(new FlyWithWings( ));
}

void RedHeadDuck::display( ) {
   std::cout << "I’m a real redheaded duck" << std::endl;
}
RedHeadDuck::~RedHeadDuck(){}
