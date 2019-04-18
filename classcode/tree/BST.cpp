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

std::string BST::getDebugString(){
  std::string s = "";
  return s;
}
