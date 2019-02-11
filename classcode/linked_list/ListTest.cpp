#include <iostream>
#include "List.h"

int main()
{
  List *l = new List();
  std::cout << l->getDebugString();
  l->insert("one");
  l->insert("two");
  l->insert("three");
  l->insert("four");
  std::cout << l->getDebugString();

  delete l;
  List l2;
  l2.insert("a");
  l2.insert("b");
  l2.insert("c");
  l2.insert("d");
  std::cout << l2.getDebugString();
  return 0;
}
