#include "ds.h"


void ds::f1(int c){
  a[b]=c;
  b++;
}

int ds::f2(){
  int c = a[b-1];
  b--;
  return c;
}
