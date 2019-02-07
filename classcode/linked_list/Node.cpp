#include <iostream>
#include <string>

class Node{
private:
  std::string item;
  Node *next;
public:
  Node();
  Node(std::string item);
  Node(std::string item, Node* next);
  void setItem(std::string item);
  void setNext(Node *next);
  std::string getItem();
  Node* getNext();
};

