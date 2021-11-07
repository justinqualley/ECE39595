#include <iostream>
#include <string>
#include "Command.h"

class DotProduct : public Command {
private:
    int *a;
    int *b;
    int length;
    float product;
public:
    DotProduct();
    DotProduct(int _length);
    virtual ~DotProduct();
    virtual void dot();
    void execute();
    void identify();
    friend std::ostream& operator<<(std::ostream& os, const DotProduct dp);
};
