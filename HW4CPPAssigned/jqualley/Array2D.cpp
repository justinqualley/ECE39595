#include <iostream>
#include <cstdlib>
#include "Array2D.h"

// This c onstructor is delegated to by other constructors and does all of the 
// allocation, showing an example of a delegating constructor..  
Array2D::Array2D(int numR, int numC, char differentiator) : numRows(numR), numCols(numC) {
   ary = new int*[numRows];
   for (int i = 0; i < numRows; i++) {
      ary[i] = new int[numCols];
      for (int j = 0; j < numCols; j++) {
            ary[i][j] = -1;
      }
   }
}

Array2D::Array2D(int numR, int numC) : Array2D(numR, numC, 'c') { 
   for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < numCols; j++) {
         ary[i][j] = i;
      }
   }
}

Array2D::Array2D(int numR, int numC, int val) : Array2D(numR, numC, 'c') { 
   for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < numCols; j++) {
         ary[i][j] = val;
      }
   }
}

int& Array2D::operator( )(int row, int col) {
   return ary[row][col];
}
      
int Array2D::operator( )(int row, int col) const {
   return ary[row][col];
}

Array2D& Array2D::operator=(const Array2D& other){
   for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < numCols; j++) {
         ary[i][j] = other(i, j);
      }
   }
   return *this;
}

bool Array2D::operator==(const Array2D& other){
   int eq = 0;                                  //Assume not equal
   if(sameSize(other)){
      eq = 1;                                   //Assume they are equal since same size
      for (int i = 0; i < numRows; i++) {       
         for (int j = 0; j < numCols; j++) {
            if(ary[i][j] != other(i, j)){   //If any element is not equal
               eq = 0;                          //Flag not equal
            }
         }
      }
   }
   return eq;                                   //Return if equal or not
}

Array2D Array2D::operator*(const Array2D& other){
   if(numCols == other.getNumRows()){
      Array2D out(numRows, other.getNumCols());
      for (int i = 0; i < numRows; i++) {
         for (int j = 0; j < numCols; j++) {
            out.ary[i][j] = 0;
            for(int k = 0; k < other.getNumRows(); k++){
                out.ary[i][j] += other(i, j) * ary[i][j];
            }
         }
      }
      return out;
   }
   Array2D out(numRows, numCols, -1);
   return out;
}

bool Array2D::sameSize(const Array2D& other) const {
   return (numRows == other.getNumRows( ) && numCols == other.getNumCols( ));
}

void Array2D::deleteAry(int** ary) {
   for (int i = 0; i < numRows; i++) {
      delete [ ] ary[i];
   }
   delete [ ] ary;
}

Array2D::Array2D(const Array2D& other) : numRows(other.getNumRows()), numCols(other.getNumCols()){
   ary = new int*[numRows];
   for (int i = 0; i < numRows; i++) {
      ary[i] = new int[numCols];
      for (int j = 0; j < numCols; j++) {
            ary[i][j] = other(i, j);
      }
   }
}
Array2D::~Array2D(){
   deleteAry(ary);
}
int Array2D::getNumRows() const {
   return numRows;
}
int Array2D::getNumCols() const {
   return numCols;
}

std::ostream& operator<<(std::ostream& os, const Array2D& a){ //Why do i need to make this a reference
   for (int i = 0; i < a.getNumRows(); i++) {
         for (int j = 0; j < a.getNumCols(); j++) {
            os << a(i, j);
            os << " ";
         }
         os << std::endl;
      }
   return os;
}

