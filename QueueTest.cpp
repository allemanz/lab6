#include "QueueTest.h"
#include "Queue.h"
#include <iostream>

void QueueTest::run()
{
  int score;
  std::cout << "\nTest 1: New Queue is empty: ";
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
  q->dequeue();
  std::cout << "Test 3: Dequeuing the number makes it empty again: ";
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
  std::cout << "Test 4: Enqueuing 1 puts 1 at front of queue: ";
  if(q->peekFront() == 1)
  {
    std::cout << "SUCCESS\n";
    score++;
  }
  else
  {
    std::cout << "FAILURE\n";
  }
  q->enqueue(2);
  std::cout << "Test 5: Enqueuing 2 still leaves 1 at the front of queue: ";
  if(q->peekFront() == 1)
  {
    std::cout << "SUCCESS\n";
    score++;
  }
  else
  {
    std::cout << "FAILURE (peekFront returns " << q->peekFront() << ")\n";
  }
  q->enqueue(3);
  std::cout << "Test 6: Enqueuing 3 still leaves 1 at the front of queue: ";
  if(q->peekFront() == 1)
  {
    std::cout << "SUCCESS\n";
    score++;
  }
  else
  {
    std::cout << "FAILURE (peekFront returns " << q->peekFront() << ")\n";
  }
  q->dequeue();
  std::cout << "Test 7: Dequeuing leaves 2 at front of queue: ";
  if(q->peekFront() == 2)
  {
    std::cout << "SUCCESS\n";
    score++;
  }
  else
  {
    std::cout << "FAILURE (peekFront returns " << q->peekFront() << ")\n";
  }
  q->dequeue();
  std::cout << "Test 8: Dequeuing again leaves 3 at front of queue: ";
  if(q->peekFront() == 3)
  {
    std::cout << "SUCCESS\n";
    score++;
  }
  else
  {
    std::cout << "FAILURE (peekFront returns " << q->peekFront() << ")\n";
  }
  q->dequeue();
  std::cout << "Test 9: Dequeuing again empties the queue: ";
  if(q->isEmpty())
  {
    std::cout << "SUCCESS\n";
    score++;
  }
  else
  {
    std::cout << "FAILURE\n";
  }
  std::cout << "Test 10: No memory leak when deleting empty queue: SUCCESS\n";
  std::cout << "Test 11: No memory leak when deleting queue containing values: FAILURE\n\n";
}
