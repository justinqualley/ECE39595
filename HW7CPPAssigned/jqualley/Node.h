#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#include "Int.h"
#include "Node.h"
using namespace std;
template<class T> //Why do I use class and not typename?
class Node { 
private:
   T data;
   Node *left = nullptr; //Dont need <T> here?
   Node *right = nullptr;
public:
   Node( );
   Node(T val);
   virtual void print( ) const;
   virtual Node<T> *insertNode(T n); //How do I read this?
};
template<class T>Node<T>::Node( ) { } //How do I read this?

template<class T>Node<T>::Node(T val) {
   data = val;
}

template<class T>void Node<T>::print( ) const {
   if (this->left != nullptr) {
      this->left->print( );
   }
   cout << data << " ";
   if (this->right != nullptr) {
      this->right->print( );
   }
}

template<class T>Node<T>* Node<T>::insertNode(T n) {
   cout << "inserting: " << n << endl;      //Why do I need to use this?
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
#endif /* NODE_H_ */

