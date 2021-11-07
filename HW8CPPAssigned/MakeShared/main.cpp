#include "Duck.h"
#include "RedHeadDuck.h"
#include "MallardDuck.h"
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include <memory>
using namespace std;
int main(int argc, char *argv[]) {
   shared_ptr<Duck> red = make_shared<RedHeadDuck>();
   shared_ptr<Duck> mallard = make_shared<MallardDuck>();
   shared_ptr<Duck> decoy = make_shared<DecoyDuck>();

   red->performQuack( );
   red->performFly( );
   red->swim( );
   red->setFlyBehavior(make_shared<FlyNoWay>(FlyNoWay()));
   red->performFly( );

   decoy->performFly( );
}
