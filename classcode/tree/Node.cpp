#include <iostream>
#include "Node.h"
Node::Node() : left(nullptr),right(nullptr)
{
}


Node::Node(int data){
  this->data = data;
  this->left = nullptr;
  this->right = nullptr;
}

Node::Node(int data, Node *left, Node *right){
  this->data = data;
  this->left = left;
  this->right = right;
}

void Node::setData(int data){
  this->data = data;
}

void Node::setLeft(Node *left){
  this->left =left;
}

void Node::setRight(Node *right){
  this->right = right;
}

int Node::getData(){
  return data;
}

Node* Node::getLeft(){
  return left;
}

Node* Node::getRight(){
  return right;
}
