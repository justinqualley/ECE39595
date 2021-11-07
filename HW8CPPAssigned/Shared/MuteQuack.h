#ifndef MUTEQUACK_H_
#define MUTEQUACK_H_
#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior {
public:
   void quack( );
   virtual ~MuteQuack();
};
#endif /* MUTEQUACK_H_ */
