#ifndef ARRAY2D_H_
#define ARRAY2D_H_
#include <iostream>
class Array2D {

public:
   Array2D(int numR, int numC); 
   Array2D(int numR, int numC, int val); 
   Array2D(const Array2D& other); 

   virtual int& operator( )(int row, int col);
   virtual Array2D& operator=(const Array2D& other);
   bool operator==(const Array2D& other);
   Array2D operator*(const Array2D& other);
   virtual int operator( )(int row, int col) const;
   
   virtual ~Array2D();
   virtual int getNumRows() const;
   virtual int getNumCols() const;

   friend std::ostream& operator<<(std::ostream& os, const Array2D& a);
private:
   Array2D(int numR, int numC, char differentiator);
   void deleteAry(int** ary);
   bool sameSize(const Array2D& other) const;
   int numRows;
   int numCols;
   int** ary;
};
#endif /* ARRAY2D_H_ */
