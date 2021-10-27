#include <iostream>
#include "Automobile.h"

int main(int argc, char* argv[ ]) {
   Automobile* amb1 = new Automobile(79320, 65200.32, 11, 30, 2000);
   std::cout << amb1->toString( ) << std::endl;    

   Automobile* amb2 = new Automobile(85645, 87200.78, 12, 03, 2001);
   std::cout << amb2->toString( ) << std::endl;    
}
