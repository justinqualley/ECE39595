#ifndef QUACK_H_
#define QUACK_H_
#include "QuackBehavior.h"

class Quack : public QuackBehavior {
public:
   void quack( );
   virtual ~Quack();
};
#endif /* QUACK_H_ */
