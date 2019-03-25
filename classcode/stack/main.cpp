#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "stack.h"

int main()
{

  stack *s = new stack();


  s->push(1);
  s->push(2);
  s->push(3);

  std::cout << s->pop() << " ";
  std::cout << s->pop() << " ";
  std::cout << s->pop() << " ";
  std::cout << "\n";
  
  delete(s);
  
  return 0;
}
