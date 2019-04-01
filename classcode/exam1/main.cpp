#include <iostream>
#include "List.h"

int main()
{
  List *l = new List();
  std::cout << l->getDebugString();
  l->insert(1);
  l->insert(2);
  l->insert(3);
  std::cout << l->getDebugString();
  std::cout << l->get_val() << "\n";
  l->set(123);
  std::cout << l->getDebugString();
  std::cout << "Value: " << l->get_val() << "\n";
  
    delete l;
  return 0;
}
