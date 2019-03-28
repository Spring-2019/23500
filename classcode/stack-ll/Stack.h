#include <iostream>

#include <string>
#include "Node.h"

#define STACK_OK 0
#define STACK_ER_FULL 1
#define STACK_SOMETHING 2
#define STACK_ERR_EMPTY 3

class Stack{
private:
  Node *head;
  int num_elements=0;
public:
  Stack();
  ~Stack();
  std::string getDebugString();
  
  int size();
  void push(std::string data);
  std::string pop();
  std::string top();
  
};


