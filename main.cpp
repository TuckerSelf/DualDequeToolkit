/**
 * @file main.cpp
 * @author Tucker Self, Braden Windsor
 * @date 2023-12-01
 * @brief deque main
 * 
 * main file for the deque toolkit functions
 */

#include <iostream>
#include "deque.h"

using namespace std;


/**
 * takes user input and does appropriate opperation
 *
 * @param deque dQ the deque
 * @param int input the user input
 * @pre 
 * @return void 
 * @post 
 * 
 */
void userOperation(deque dQ, int input);


/**
 * automates push_back from 0 to given input
 *
 * @param deque dQ the deque
 * @param int num the given input
 * @pre 
 * @return void 
 * @post 
 * 
 */
void autoEnter(deque dQ, int num);

int main() {
  deque mainDQ;
  int userChoice;

  cout << "Welcome to the Deque Toolkit. What operation would you like to do?: " << endl
       << "Push data to front: 1" << endl << "Push data to back: 2" << endl
       << "Pop front data: 3" << endl << "Pop back data: 4" << endl << "Insert numbers(from 0 to given): 5"
       << endl << "Retrieve front data: 6" << endl << "Retrieve back data: 7" << endl
       << "Output deque size: 8" << endl << "Check if deque is empty: 9" << endl
       << "Exit Program: 0" << endl << "Your Choice: ";
  cin >> userChoice;

  userOperation(mainDQ, userChoice);
  
  return 0;
}

void userOperation(deque dQ, int input){
  int decision;
  if(input == 1){
    cout << "What will be put to the front?: ";
    cin >> decision;
    dQ.push_front(decision);
    cout << "Data pushed front." << endl;
  }
  else if(input == 2){
    cout << "What will be put to the back?: ";
    cin >> decision;
    dQ.push_back(decision);
    cout << "Data pushed back." << endl;
  }
  else if(input == 3){
    cout << "Deleting front data..." << endl;
    dQ.pop_front();
    cout << "Data deleted." << endl;
  }
  else if(input == 4){
    cout << "Deleting back data..." << endl;
    dQ.pop_back();
    cout << "Data deleted." << endl;
  }
  else if(input == 5){
    cout << "How many ints would you like to input?: ";
    cin >> decision;
    cout << "Entering data..." << endl;
    autoEnter(dQ, decision);
    cout << "Data entered." << endl;
  }
  else if(input == 6){
    cout << "The front value is " << dQ.front() << "." << endl;
  }
  else if(input == 7){
    cout << "The back value is " << dQ.back() << "." << endl;
  }
  else if(input == 8){
    cout << "The size of the deque is " << dQ.size() << "." << endl;
  }
  else if(input == 9){
    if(dQ.empty())
      cout << "The deque is empty." << endl;
    else
      cout << "The deque is not empty." << endl;
  }
  else if(input == 0){
    cout << "Exiting program..." << endl;
  }
  else{
    cout << "Invalid Input." << endl;
  }
}

void autoEnter(deque dQ, int num){
  for(int i=0; i<num; i++)
    dQ.push_back(i);
}
