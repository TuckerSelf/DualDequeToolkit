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

void userOperation(int input);

void autoEnter(int num);

int main() {
  deque dQ;
  int userChoice;

  cout << "Welcome to the Deque Toolkit. What operation would you like to do?: " << endl
       << "Push data to front: 1" << endl << "Push data to back: 2" << endl
       << "Pop front data: 3" << endl << "Pop back data: 4" << endl << "Insert numbers(from 0 to given): 5"
       << endl << "Retrieve front data: 6" << endl << "Retrieve back data: 7" << endl
       << "Output deque size: 8" << endl << "Check if deque is empty: 9" << endl
       << "Exit Program: 0" << endl << "Your Choice: ";
  cin >> userChoice;

  userOperation(userChoice);
  
  return 0;
}

void userOperation(int input){
  if(input == 1){

  }
  else if(input == 5){
    int decision;
    cout << "How many ints would you like to input?: ";
    cin >> decision;
    autoEnter(decision);
  }
}

void autoEnter(int num){
  for(int i=0; i<num; i++)
    dQ.push_pack(i);
}
