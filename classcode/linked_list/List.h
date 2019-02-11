#include <iostream>

#include <string>
#include "Node.h"

class List{
private:
  Node *head;
public:
  List();
  ~List();
  void insert(std::string data);
  std::string getDebugString();
};


