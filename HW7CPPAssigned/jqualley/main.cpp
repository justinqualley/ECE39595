#include <iostream>
#include "Int.h"
#include "Node.h"
#include "Float.h"

int main(int argc, char** args) {
   const int values[ ] {5, 1, 7, 15};
   Node<Int>* rootInt = new Node<Int>(Int(10));
   for (int i = 0; i < 4; i++) {
      rootInt->insertNode(Int(values[i])); 
   }

   rootInt->print( );
   std::cout << std::endl;

   const double dvalues[] {5.1, 1.1, 7.1, 15.1};
   Node<double>* rootDouble = new Node<double>(10.0);
   for (int i = 0; i < 4; i++) {
      rootDouble->insertNode((double) dvalues[i]); 
   }
   rootDouble->print( );
   std::cout << std::endl;

   const float fvalues[] {5.1, 1.1, 7.1, 15.1};
   Node<Float>* rootFloat = new Node<Float>(Float(10.0));
   for (int i = 0; i < 4; i++) {
      rootFloat->insertNode(Float(fvalues[i])); 
   }

   rootFloat->print( );
   std::cout << std::endl;

}
