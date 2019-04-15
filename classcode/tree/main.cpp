#include <iostream>
#include "Node.h"

int main()
{
  Node *n= new Node(10);
  Node *t;
  n->setLeft(new Node(20));
  n->setRight(new Node(30));

  t = n->getRight();
  t->setLeft(new Node(40));
  t->setRight(new Node(50));
  
  std::cout<< n->getRight()->getData() << "\n";
  return 0;
}
