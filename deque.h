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
  int** blockMap;
  
  int amount;

  int mapsize = 10;
  const static int blocksize = 20;

  int firstBlock;
  int firstElement;

  void reSize();
 public:
  deque();

  ~deque();

  void push_front(int num);

  void pop_front();

  void push_back(int num);

  void pop_back();

  int front();

  int back();

  bool empty();

  int size();

  int &operator[](unsigned int position);
};

#endif //DEQUE_H
