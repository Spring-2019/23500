#include <iostream>

#include <string>
#include "Node.h"

class List{
private:
  int dummy=0;
  Node *head;
public:
  List();
  ~List();
  void insert(int data);
  std::string getDebugString();
  void push_back(int);
  int size() ;
  void remove(int i);
  int &operator[](int); // overloaded square brackets
  int get_val();
  void set(int value);
  
};


