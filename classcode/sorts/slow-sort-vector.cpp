#include <iostream>
#include <stdlib.h>
#include <time.h>

void print(int a[], int size){
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << ", ";
    }
  std::cout << "\n\n";
}


int find_min(int a[], int start_index, int stop_index){
  int min_index = start_index;
  int i;
  for (i = start_index; i < stop_index; ++i) {
    if (a[i] < a[min_index]){
      min_index = i;
    }
  }
  return min_index;
}

void ssort(int a[], int size){
  int min_index;
  int i,tmp;
  for (i = 0; i < size-1; ++i) {
    min_index = find_min(a,i,size);
    tmp = a[i];
    a[i] = a[min_index];
    a[min_index]=tmp;
  }
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
  ssort(a,s);
  print(a,s);
  
  return 0;
}

