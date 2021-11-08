#include "WorkQueue.h"
#include <mutex>

shared_ptr<Command> WorkQueue::get(){
    static mutex m;
    lock_guard<mutex>lock(m);
    if(q.size() == 0){
        return nullptr;
    }
    auto item = q.back();
    q.pop_back();
    return item;
}
void WorkQueue::put(shared_ptr<Command> cmd){
    static mutex m;
    lock_guard<mutex>lock(m);
    q.push_back(cmd);
}

vector<shared_ptr<Command>> WorkQueue::getQ(){
    return q;
}
