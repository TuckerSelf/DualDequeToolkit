/**
 * @file deque.h
 * @author Tucker Self, Braden Windsor
 * @date 2023-12-01
 * @brief deque header
 * 
 * creates prototype functions for the deque class
 */

#ifndef DEQUE_H
#define DEQUE_H

class deque{
 private:
  int queueSize;

 public:
  deque();

  ~deque();

  void push_front();

  void pop_front();

  void push_back();

  void pop_back();

  front();

  back();

  bool empty();

  int size();

  operator[](int position);
};

#endif //DEQUE_H
