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


/**
 * changes the size of the deque
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void reSize();
  
public:


/**
 * deque constructor
 *
 * @pre 
 * @post 
 * 
 */
  deque();


/**
 * deque deconstructor
 *
 * @pre 
 * @post 
 * 
 */
  ~deque();


/**
 * pushes the entered int to the front of the deque
 *
 * @param int num the int to be pushed to the front
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void push_front(int num);


/**
 * deletes the int at the front of the deque
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void pop_front();


/**
 * inserts the int at the back of the deque
 *
 * @param int num the int to be pushed back
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void push_back(int num);


/**
 * deletes the int at the back of the deque
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void pop_back();


/**
 * outputs the int at the front of the deque
 *
 * @pre 
 * @return int the first int in the deque
 * @post 
 * 
 */
  int front();


/**
 * outputs the int at the back of the deque
 *
 * @pre 
 * @return int the last int in the deque
 * @post 
 * 
 */
  int back();


/**
 * checks if the deque is empty
 *
 * @pre 
 * @return bool true if empty, false if data is stored
 * @post 
 * 
 */
  bool empty();


/**
 * returns the size of the deque
 *
 * @pre 
 * @return int number of ints stored in the deque
 * @post 
 * 
 */
  int size();


/**
 * overloads the [] operator to work with deque
 *
 * @param unsigned int position 
 * @pre 
 * @return int& the position on the deque
 * @post 
 * 
 */
  int& operator[](unsigned int position);
};

#endif //DEQUE_H
