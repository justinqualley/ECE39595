#include "DotProduct.h"

DotProduct::DotProduct(){
    DotProduct(0);
}
DotProduct::~DotProduct(){
    //delete this;
}
DotProduct::DotProduct(int _length) : length(_length){
    a = new int[length];
    b = new int[length];
    for (int i=0; i < length; i++) {
        a[i] = rand( ) % 100;
        b[i] = rand( ) % 100;
    }
}
void DotProduct::dot(){
    float res = 0; 
    for(int i = 0; i < length; i++){
        res += a[i] * b[i];
    }
    product = res;
}
void DotProduct::execute(){
    this->dot();
}
void DotProduct::identify(){
    std::cout << this;
}
std::ostream& operator<<(std::ostream& os, const DotProduct dp){
    return os << "inner product on arrays of length " << dp.length << ", result is " << dp.product << "\n\n";
}
