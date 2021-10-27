//Pekin duck: A new concrete class that inherits from Duck. 
//It will have a Quack quacking behavior, FlysPoorly flying behavior, LaysEggsNotBroody egg laying behavior.

#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include "LaysEggs.h"

class PekinDuck : public Duck { 
public:
   PekinDuck( );
   void display( );
};
