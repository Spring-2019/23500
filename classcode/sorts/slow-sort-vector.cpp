#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

void print(std::vector<int> a){
  int size = a.size();
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << ", ";
  }
  std::cout << "\n\n";
}


int find_min(std::vector<int> a, int start_index, int stop_index){
  int min_index = start_index;
  int i;
  for (i = start_index; i < stop_index; ++i) {
    if (a[i] < a[min_index]){
      min_index = i;
    }
  }
  return min_index;
}

void  ssort(std::vector<int> &a){
  int size = a.size();
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
  
  std::vector<int> a(10);
  
  
  for (i=0;i<a.size();i++)
    a[i] = rand()%1000;

  print(a);
  ssort(a);
  print(a);
  
  return 0;
}

