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

void BST::delete(int data){

  // find the node in question first
  // if it's not there, can't delete it


  // need to get a pointer to the parent
  // of the node we want to delete

  // there are 3 cases for deletion

  // 1 - the node we want to delete is a leaf
  //   - just set the parent's left/right pointer to null

  // 2 - the node we want to delete has one child
  //   - repoint the parent of the node to the children
  //   - of the node

  // if you think about it, cases 1 and 2 are
  // really the same - assign the parent of the node
  //  to point to one of the children of the node
  // and don't forget to delete the node

  // 3 - the node we want to delete has 2 children
  //   - replace the node we want to delete
  //   - with the largest from its left subtree
  //   - or the smallest from its right subtree
  //   -
  //   - we can find the largest on left by first
  //   - going to node->getLeft() and then
  //   - going as far right as we can
  //
  //   - don't forget to remove the largest from left
  //   - (or smallest from right) which will be
  //   - a case 1 or case 2 deletion
}

std::string BST::getDebugString(){
  std::string s = "";
  return s;
}
