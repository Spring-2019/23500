#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "Stack.h"

int main()
{

  Stack *s = new Stack();
  /*
    s->push("one");
  s->push("two");
  s ->push("three");

  std::cout << s->getDebugString() << "\n";
  std::cout << s->size() << "\n";

  std::cout << "POP: " << s->pop() << " ";

  std::cout << s->getDebugString() << "\n";
  std::cout << s->size() << "\n";

  std::cout << "POP: " << s->pop() << " ";

  std::cout << s->getDebugString() << "\n";
  std::cout << s->size() << "\n";

  s->push("NEW STUFF");
  std::cout << s->getDebugString() << "\n";
  std::cout << s->size() << "\n";

  std::cout << "POP: " << s->pop() << " ";

  std::cout << s->getDebugString() << "\n";
  std::cout << s->size() << "\n";

  std::cout << s->top() << "\n";
  */

  try{
    std::string result = s->pop();
  } catch (int e){
    std::cout << "We got exception: " << e << "\n";
  }
  
  std::cout << "and continued to run\n";
  
  delete(s);
  
  return 0;
}
