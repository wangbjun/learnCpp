#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "Customer.cpp"

class MyQueue
{
public:
  MyQueue(int queueCapacity);
  virtual ~MyQueue();
  void ClearQueue();
  bool QueueEmpty() const;
  bool QueueFull() const;
  int QueueLength() const;
  bool EnQueue(Customer element);
  Customer DeQueue();
  void QueueTraverse();
private:
  Customer *m_pQueue;
  int m_iQueueLen;
  int m_iQueueCapacity;
  int m_iHead;
  int m_iTail;
};

#endif
