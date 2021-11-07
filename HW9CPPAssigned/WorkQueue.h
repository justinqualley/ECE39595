#include <memory>
#include "Command.h"
#include <vector>
using namespace std;

class WorkQueue {
private:
    vector<shared_ptr<Command>> q; 
public:
    virtual shared_ptr<Command> get();
    virtual void put(shared_ptr<Command> cmd);
};
