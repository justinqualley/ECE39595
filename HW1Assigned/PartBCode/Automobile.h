#ifndef Automobile_H_
#define Automobile_H_
#include <string>

class Automobile{
private:
    int _VIN_;
    float _miles_;
    int _yy_;
    int _mm_;
    int _dd_;
    std::string _maint_;

public:
    Automobile(int VIN, float miles, int mm, int dd, int yy);
    std::string toString();
    std::string setDate(int mm, int dd, int yy);
};
#endif //Automible_H_
