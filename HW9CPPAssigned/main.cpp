#include <iostream>
#include <chrono>
#include <memory>
#include <thread>

#include "QuickSort.h"
#include "WorkQueue.h"
#include "DotProduct.h"

#define NUMSORTS 4
#define STARTSIZE 8000

using namespace std::chrono;


void worker(WorkQueue workQ) {
   std::shared_ptr<Command> c(workQ.get( ));
   while (c != nullptr) {
      c->execute( );
      static mutex outputLock;
      std::lock_guard<std::mutex> lck(outputLock); 
      (*c).identify( );
      c = workQ.get( );
   }
}


int main(int argc, char** args) {
   WorkQueue wq;
   int sortSize = STARTSIZE;
   for (int i=0; i<NUMSORTS; i++) {
      auto start = high_resolution_clock::now();
      for(int j = 0; j < 4; j++){
         shared_ptr<Command> wi = make_shared<DotProduct>(sortSize);
         wq.put(wi);
      }
      for(int j = 0; j < 4; j++){
         shared_ptr<Command> wi = make_shared<QuickSort>(sortSize);
         wq.put(wi);
      }
      /*thread t[NUMSORTS];
      for(int j = 0; j < NUMSORTS; j++){
         t[i] = thread(worker, wq);
      }*/
      thread t1(worker, wq);
      t1.join();
      /*thread t2(worker, wq);
      thread t3(worker, wq);
      thread t4(worker, wq);*/
      auto stop = high_resolution_clock::now();
      auto duration = duration_cast<microseconds>(stop - start).count( );
      std::cout << "Execution time with 4 threads is " << duration << " microseconds";
      sortSize *=2;
   }
}
