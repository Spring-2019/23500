#include <iostream>

#include <string>
#include "Stack.h"

Stack::Stack(){
  head = nullptr;
}

Stack::~Stack(){
  if (head != nullptr){
    Node *t,*t2;
    
    t=head->getNext();
    while (t!=nullptr){
      t2=t;
      t=t->getNext();
      delete t2;
    }
    delete head;
  }

  
}


std::string Stack::getDebugString(){
  std::string s = "";
  Node *t = head;
  while (t != nullptr){
    s = s + t->getData()+"->";
    t=t->getNext();
  }
  s=s+" NULL\n";
  return s;
}

int Stack::size(){
  return num_elements;
}

void Stack::push(std::string data){
  Node *tmp = new Node(data);
  tmp->setNext(head);
  head = tmp;
  num_elements++;
}

std::string Stack::pop(){
  std::string retval;

  if (head==nullptr){
    throw STACK_ERR_EMPTY;
  }
  
  retval = head->getData();
  Node *tmp = head;
  head = head->getNext();
  delete tmp;
  num_elements--;
  
  return retval;
}

std::string Stack::top(){
  std::string retval;
  if (head==nullptr)
    retval = "";
  else {
    retval = head->getData();
  }
  return retval;
}
