#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "ds.h"

int main()
{

  ds *x = new ds();
    

  x->f1(1);
  x->f1(2);
  x->f1(3);

  std::cout << x->f2() << " ";
  std::cout << x->f2() << " ";
  std::cout << x->f2() << " ";
  std::cout << "\n";
  
  delete(x);
  
  return 0;
}
