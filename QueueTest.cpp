#include "QueueTest.h"
#include "Queue.h"
#include <iostream>

void QueueTest::run()
{
  int score;
  std::cout << "Test 1: New Queue is empty: ";
  Queue* q = new Queue;
  if(q->isEmpty())
  {
    std::cout << "SUCCESS\n";
    score++;
  }
  else
  {
    std::cout << "FAILURE\n";
  }
  delete q;
  q = new Queue;
  q->enqueue(1);
  std::cout << "Test 2: Enqueuing a number makes it no longer empty: ";
  if(!(q->isEmpty()))
  {
    std::cout << "SUCCESS\n";
    score++;
  }
  else
  {
    std::cout << "FAILURE\n";
  }
  delete q;

}
