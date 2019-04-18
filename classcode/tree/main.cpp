#include <iostream>
#include "BST.h"

int main()
{

  BST *t = new BST();
  t->insert(50);
  t->insert(30);
  t->insert(35);
  t->insert(75);
  t->insert(80);
  int x;
  try{
    x = t->search(80);
    std::cout << "we found 80\n";
  } catch (int e){
    std::cout << "We got exception: " << e << "\n";
  }
  try{
    x = t->search(1000);
    std::cout << "we found 1000\n";
  } catch (int e){
    std::cout << "We got exception: " << e << "\n";
  }
 
  /*
    Node *n= new Node(10);
    Node *t;
    n->setLeft(new Node(20));
    n->setRight(new Node(30));

    t = n->getRight();
    t->setLeft(new Node(40));
    t->setRight(new Node(50));
  
    std::cout<< n->getRight()->getData() << "\n";
  */
  return 0;
}
