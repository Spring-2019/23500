#include "stack.h"


void stack::push(int item){
  a[top]=item;
  top++;
}

int stack::pop(){
  int tmp = a[top-1];
  top--;
  return tmp;
}
