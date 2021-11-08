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
      c->identify( );
      c = workQ.get( );
   }
}


int main(int argc, char** args) {
   WorkQueue wq;
   std::cout << "Entering"<<std::endl;
   int sortSize = STARTSIZE;
   std::shared_ptr<Command> wi;
   auto start = high_resolution_clock::now();
   for (int i=0; i<NUMSORTS; i++) {
      wi = std::make_shared<DotProduct>(sortSize);
      //(*wi).identify();
      wq.put(wi);
      wi = std::make_shared<QuickSort>(sortSize);
      //wi->identify();
      wq.put(wi);

      /*thread t[NUMSORTS];
      for(int j = 0; j < NUMSORTS; j++){
         t[i] = thread(worker, wq);
      }*/
      //thread t1(worker, wq);
      //t1.join();
      //worker(wq);
      /*thread t2(worker, wq);
      thread t3(worker, wq);
      thread t4(worker, wq);*/
      sortSize *=2;
   }
   //worker(wq);
   vector<thread> ts;
   for(int j = 0; j < NUMSORTS; j++){
         ts.push_back(thread(worker, wq));
   }
   for(auto &t: ts){
      t.join();
   }
   //thread t1(worker, wq);
   //thread t2(worker, wq);
   //thread t3(worker, wq);
   //thread t4(worker, wq);
   //t1.join();
   //t2.join();
   //t3.join();
   //t4.join();
   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop - start).count( );
   std::cout << "Execution time with 4 threads is " << duration << " microseconds\n\n";
   /*for(auto i: wq.getQ()){
         i->execute();
         i->identify();
      }*/
}
