#include <iostream>

#include "Node.h"

int main()
{
  Node *n = new Node();
  Node *n2;
  n->setData("first");

  n2 = new Node("second");

  n->setNext(n2);

  n2 = new Node("third");

  n->getNext()->setNext(n2);

  std::cout << n->getData() << "\n";
  std::cout << n->getNext()->getData() << "\n";
  std::cout << n->getNext()->getNext()->getData() << "\n";

  return 0;
}
