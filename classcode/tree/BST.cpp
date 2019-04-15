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
}

std::string BST::getDebugString(){
  std::string s = "";
  return s;
}
