#include <iostream>

#include <string>
#include "BST.h"

BST::BST(){
  root = nullptr;
}

BST::~BST(){
  std::cout << "In the destructor\n";
  
}

void BST::insert(int data){
  Node *newNode = new Node(data);
  Node *tmp,*t2;
  if (root==nullptr){
    root = newNode;
    return;
  }
  tmp = root;
  while (tmp != nullptr){
    t2 = tmp;
    if (data > tmp->getData())
      tmp = tmp->getRight();
    else
      tmp = tmp->getLeft();
  }
  if (data > t2->getData())
    t2->setRight(newNode);
  else
    t2->setLeft(newNode);
  return;
}

int BST::search(int data){
  Node *tmp = root;
  while (tmp != nullptr){
    if (tmp->getData() == data)
      return data;
    else if (tmp->getData() > data)
      tmp = tmp->getLeft();
    else
      tmp = tmp->getRight();
  }

  // if we got here then the data isn't in the tree
  // but in a real program our tree would store
  // a class where we're searching on something like
  // an id number so we could return null if not found
  throw 1;

  
}
std::string BST::getDebugString(){
  std::string s = "";
  return s;
}
