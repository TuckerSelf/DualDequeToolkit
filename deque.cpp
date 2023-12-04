/**
 * @file deque.cpp
 * @author Tucker Self, Braden Windsor
 * @date 2023-12-01
 * @brief deque cpp file
 * 
 * gives meaning to the functions of the deque class
 */

#include <iostream>
#include <iomanip>
#include "deque.h"

using namespace std;

deque::deque(){
  firstBlock = 4;
  firstElement = 0;
  blockMap = new int* [mapsize];

  for(int i=0; i<mapsize-1; i++){
    blockMap[i] = new int[blocksize];
  }
}

deque::~deque(){
  for(int i=0; i<mapsize; i++){
    delete[] blockMap[i];
  }
  delete[] blockMap;
}

void deque::reSize(){
  
  int** temp;
  mapsize = mapsize+4;
  temp=new int* [mapsize];
 
  temp[0]=new int[blocksize];
  temp[1]=new int[blocksize];
  
  for(int i=0; i<mapsize-4; i++){
    temp[i+2]=blockMap[i];
  }
  
  temp[mapsize-1] = new int[blocksize];
  temp[mapsize-2] = new int[blocksize];

  delete[] blockMap;
  
  blockMap = temp;
  firstBlock = 2;
  if(firstElement == 0){
    firstElement = blocksize-1;
  }
}

void deque::push_front(int num){
  if(firstElement==0 && firstBlock==0){
    reSize();
  }
  if(firstElement==0){
    amount++;
    firstElement = blocksize-1;
    firstBlock = firstBlock-1;
    blockMap[firstBlock][firstElement] = num;
  }
  else{
    amount++;
    firstElement = firstElement-1;
    blockMap[firstBlock][firstElement] = num;
  }
}

void deque::pop_front(){
  if(empty()){
    return;
  }
  blockMap[firstBlock][firstElement]=0;
  if(firstElement+1 == blocksize){
    firstBlock++;
    firstElement = 0;
  }
  else{
    firstElement++;
  }
  amount--;
}

void deque::push_back(int num){
  int row;
  int col;
  row = firstBlock + ( (firstElement+amount) / blocksize);
  col = (firstElement+amount) % blocksize;
  if(empty()){
    amount++;
    blockMap[row][col] = num;
  }
  else if(row==mapsize-1 && col==blocksize-1){
    reSize();
    amount++;
    row = firstBlock +( (firstElement+amount) / blocksize);
    blockMap[row][0] = num;
  }
  else if(col==blocksize-1){
    amount++;
    blockMap[row+1][0] = num;
  }
  else{
    blockMap[row][col] = num;
    amount++;
  }
}

void deque::pop_back(){
  int row;
  int col;
  row = firstBlock + ( (firstElement+amount) / blocksize);
  col = (firstElement+amount) % blocksize;
  if(empty()){
    return;
  }
  else{
    blockMap[row][col-1]=0;
  }
  amount--;
}

int deque::front(){
  return blockMap[firstBlock][firstElement];
}

int deque::back(){
  int row;
  int col;
  row = firstBlock + ( (firstElement+amount) / blocksize);
  col = (firstElement+amount) % blocksize;
  return blockMap[row][col-1];
}

bool deque::empty(){
  if(amount==0){
    return 1;
  }
  else{
    return 0;
  }
}

int deque::size(){
  return amount;
}

int& deque::operator[](unsigned int index){
  int row;
  int col;
  row = firstBlock + ( (firstElement+index) / blocksize);
  col = (firstElement+index) % blocksize;
  return blockMap[row][col];
}
