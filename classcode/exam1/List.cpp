#include <iostream>

#include <string>
#include "List.h"

List::List(){
  head = nullptr;
}

List::~List(){
  std::cout << "In the destructor\n";
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

void List::insert(int data){
  Node *t = new Node(data,nullptr);
  if (head==nullptr)
    head=t;
  else{
    t->setNext(head);
    head = t;
  }
}

std::string List::getDebugString(){
  std::string s = "";
  Node *t = head;
  while (t != nullptr){
    s = s + std::to_string( t->getData() )+"->";
    t=t->getNext();
  }
  s=s+" NULL\n";
  return s;
}

void List::push_back(int s){
  Node *t = new Node(s);
  if (head==nullptr)
    head = t;
  else{
    Node *t2=head;
    while (t2->getNext()!=nullptr)
      t2=t2->getNext();
    t2->setNext(t);
  }
}

int List::size(){
  Node *t = head;
  int i = 0;
  while (t!=nullptr){
    t=t->getNext();
    i++;
  }
  return i;
}

void List::remove(int i){
  Node *t, *t2;
  if (i>size()-1)
    return;

  if (i==0 && size()==1){
    delete head;
    return;
  }

  if (i==0){
    t=head;
    head=head->getNext();
    delete t;

  }

  t=head;
  
  while (i>0){
    i--;
    t2=t;
    t=t->getNext();
  }

  t2->setNext(t->getNext());
  delete t;
  
}

int &List::operator[](int i){
  
  if (i>size()-1)
    return dummy;
  Node *t = head;
  while (i>0){
    i--;
    t=t->getNext();
  }
  return t->getRef();
}


void List::set(int value){
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
  head=nullptr;
  while (value>0){
    
    int digit = value%10;
    value = value / 10;
    Node *tmp = new Node(digit,nullptr);
    tmp->setNext(head);
    head = tmp;
  }
        
  
}


int List::get_val(){
  int retval=0;
  int mult=1;
  Node *t = head;
  while (t!=nullptr){
    retval = retval + t->getData() * mult;
    mult = mult * 10;
    t=t->getNext();
  }

  return retval;
  
}
