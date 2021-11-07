#ifndef SQUEAK_H_
#define SQUEAK_H_
#include "QuackBehavior.h"

class Squeak : public QuackBehavior {
public:
   void quack( );
   virtual ~Squeak();
};
#endif /* SQUEAK_H_ */
