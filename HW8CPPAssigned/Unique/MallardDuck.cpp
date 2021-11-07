#include <iostream>
#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck( ) {
   quackBehavior = unique_ptr<QuackBehavior>(new Quack( ));
   flyBehavior = unique_ptr<FlyBehavior>(new FlyWithWings( ));
}

void MallardDuck::display( ) {
   std::cout << "I’m a real mallard duck" << std::endl;
}
 MallardDuck::~MallardDuck(){}
