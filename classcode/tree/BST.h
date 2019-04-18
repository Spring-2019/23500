#include <iostream>

#include <string>
#include "Node.h"

class BST{
private:
  Node *root;
public:
  BST();
  ~BST();
  void insert(int data);
  int search(int data);
  std::string getDebugString();
};


