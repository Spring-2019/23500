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

  // insert a new node between second and third

  Node *n3 = new Node("four",n2);
  n->getNext()->setNext(n3);
  
  // delete the second node

  //n->setNext(n3);
  n2 = n->getNext();
  n->setNext(n->getNext()->getNext());
  delete n2;

  n2 = new Node("new 1",n);
  n = n2;
  n2 = new Node("new 2",n);
  n = n2;
  n2 = new Node("new 3",n);
  n = n2;
  Node *head = n;
  
  while (n->getNext()!=nullptr){
    std::cout << n->getData() << " ";
    n=n->getNext();
  }
  std::cout << "\n";

  n->setNext(head);
  while (n->getNext()!=nullptr){
    std::cout << n->getData() << " ";
    n=n->getNext();
  }
  std::cout << "\n";
  
  return 0;
}
