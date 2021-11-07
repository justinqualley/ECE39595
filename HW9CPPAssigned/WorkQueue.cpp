#include "WorkQueue.h"
#include <mutex>

shared_ptr<Command> WorkQueue::get(){
    static mutex m;
    lock_guard<mutex>lock(m);
    auto item = q.back();
    q.pop_back();
    return item;
}
void WorkQueue::put(shared_ptr<Command> cmd){
    static mutex m;
    lock_guard<mutex>lock(m);
    q.push_back(cmd);
}
