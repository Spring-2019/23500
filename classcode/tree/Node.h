#pragma once

class Node{
 private:
  std::string data;
  Node *left,*right;
public:
  Node();
  Node(std::string data);
  Node(std::string data, Node* left,Node * right);
  void setData(std::string data);
  
  void setLeft(Node *left);
  void setRight(Node *right);
  std::string getData();
  Node* getLeft();
  Node* getRight();
};
