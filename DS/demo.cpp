#include <iostream>
#include <stdlib.h>
#include "MyQueue.cpp"
#include "Customer.h"
using namespace std;

int main(int argc, char const *argv[]) {
  // MyQueue *p = new MyQueue(4);
  // p->EnQueue(10);
  // p->EnQueue(11);
  // p->EnQueue(12);
  // p->EnQueue(13);
  // p->QueueTraverse();
  // p->DeQueue();
  // p->DeQueue();
  // p->EnQueue(14);
  // p->QueueTraverse();
  // p->EnQueue(15);
  // p->QueueTraverse();
  // delete p;
  // p = NULL;
  MyQueue *p = new MyQueue(4);
  Customer c1("A", 20);
  Customer c2("B", 21);
  Customer c3("C", 22);
  Customer c4("D", 23);
  p->EnQueue(c1);
  p->EnQueue(c2);
  p->EnQueue(c3);
  p->EnQueue(c4);
  p->DeQueue();
  p->EnQueue(c1);
  p->QueueTraverse();
  cin.get();
  return 0;
}
