#include <string>
#include <sstream>
#include "Automobile.h"
//vehicle identification number that can be represented as an integer, miles driven, which can be represented as a float, 
//and the date of the last maintenance, which should be stored as a string.
Automobile::Automobile(int VIN, float miles, int mm, int dd, int yy){
    _VIN_ = VIN;
    _miles_ = miles;
    _maint_ = ""+std::to_string(mm)+"/"+std::to_string(dd)+"/"+std::to_string(yy);
}

std::string Automobile::toString( ) {
    std::ostringstream m;
    m << _miles_;
    std::string str = "VIN: "+std::to_string(_VIN_) +"\n";
    str += "Miles Driven: "+m.str()+"\n";
    str += "Maintenance Date: "+_maint_+"\n";
    return str;
}
