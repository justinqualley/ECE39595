#include <iostream>
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

DecoyDuck::DecoyDuck( ) {
   flyBehavior = make_shared<FlyNoWay>(FlyNoWay( ));
   quackBehavior = make_shared<MuteQuack>(MuteQuack( ));
}

void DecoyDuck::display( ) {
   std::cout << "I’m a decoy duck" << std::endl;
}
DecoyDuck::~DecoyDuck(){}
