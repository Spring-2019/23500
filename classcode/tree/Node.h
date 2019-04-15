#pragma once

class Node{
 private:
  int data;
  Node *left,*right;
public:
  Node();
  Node(int data);
  Node(int data, Node* left,Node * right);
  void setData(int data);
  
  void setLeft(Node *left);
  void setRight(Node *right);
  int getData();
  Node* getLeft();
  Node* getRight();
};
