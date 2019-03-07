#include <iostream>
#include <stdlib.h>
#include <time.h>

void print(int a[], int size){
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << ", ";
    }
  std::cout << "\n";
}

void ssort(int a[], int size){

  // sort the list
}

int main()
{
  int i;
  srand(time(NULL));
  
  int s = 10;
  int *a = new int[s];
  
  
  for (i=0;i<s;i++)
    a[i] = rand()%1000;

  print(a,s);
  // sort it

  // print it again
  
  
  return 0;
}

