#include <iostream>
#include "Int.h"
#include "Node.h"

template<typename T>Node<T>::Node( ) { }

template<typename T>Node<T>::Node(T val) {
   data = val;
}

template<typename T>void Node<T>::print( ) const {
   if (this->left != nullptr) {
      this->left->print( );
   }
   std::cout << data << " ";
   if (this->right != nullptr) {
      this->right->print( );
   }
}

template<typename T>Node<T>* Node<T>::insertNode(T n) {
   if (this->data == n) return this;
   if (n < this->data) {
      if (left != nullptr) return left->insertNode(n); 
      else {
         left = new Node(n);
         return left;
      }
   }
   if (n > this->data) {
      if (right != nullptr) return right->insertNode(n); 
      else {
         right = new Node(n);
         return left;
      }
   }
   return nullptr;
}
