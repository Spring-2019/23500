#include <iostream>
#include <vector>
#include <time.h>
#include <unistd.h>
#include <cstdlib>
#include <sys/time.h>
#include <math.h>

int find_min(std::vector<int>a , int start_index, int stop_index){
  int min_index = start_index;
  int i;
  for (i = start_index ; i < stop_index; ++i){
    if (a[i] < a[min_index])
      min_index = i;
  }

  return min_index;
}

std::vector<int> ssort(std::vector<int> a){

  
  int i,j;
  int l = a.size();
  int min_index;
  
  for (i=0; i < a.size()-1; i++){
    min_index = find_min(a,i,a.size());
    int tmp=a[i];
    a[i]=a[min_index];
    a[min_index]=tmp;
  }
  return a;
}


void print_vector(std::vector<int> a){
  for (auto i : a){
    std::cout << i << " " ;
  }
  std::cout << "\n";

}


void print_help(char **argv){
  std::cout << argv[0] << ": [-p] [-s size] [-a s|m|q ]\n";

}



std::vector<int> merge(std::vector<int> a, std::vector<int> b){
  int ai=0;
  int bi=0;
  std::vector<int> result;
  while (ai<a.size() && bi<b.size()){
    if (a[ai] < b[bi]){
      result.push_back(a[ai]);
      ai++;
    } else {
      result.push_back(b[bi]);
      bi++;
    }
  }
  while (ai<a.size()){
    result.push_back(a[ai]);
    ai++;
  }
  while (bi<b.size()){
    result.push_back(b[bi]);
    bi++;
  }
  return result;
      
 
  }

std::vector<int> msort(std::vector<int> list){

  if (list.size() <=1){
    return list;
  }
  // split

  int mid = list.size() / 2;
  std::vector<int> a,b;
  int i;
  for (i=0;i<mid;i++){
    a.push_back(list[i]);
  }
  for (i=mid;i<list.size();i++){
    b.push_back(list[i]);
  }

  a = msort(a);
  b = msort(b);
  list = merge(a,b);
  return list;
}


std::vector<int> qsort(std::vector<int> list){
  int i;
  if (list.size() <=1){
    return list;
  }

  std::vector<int> a,b;
  int pivot = list[0];
  
  for (i=1;i<list.size();i++){
    if (list[i]<=pivot)
      a.push_back(list[i]);
    else
      b.push_back(list[i]);
  }

  a = qsort(a);
  b = qsort(b);

  for (i=0;i<a.size();i++){
    list[i]=a[i];
  }
  list[i]=pivot;
  i++;
  for (int j = 0; j < b.size();j++){
    list[i] = b[j];
    i++;
  }
  

  return list;
  
  
}
void qsort2(std::vector<int> &a, int left, int right)
{
  int i = left, j = right;
  int mid = (i+j)/2;
  int tmp;
  int pivot;

  if (a[i]>a[mid] && a[i] > a[j])
    pivot = a[i];
  else if (a[j]>a[mid] && a[j] > a[i])
    pivot = a[j];
  else
    pivot = a[mid];

  /* partition */
  while (i <= j) {
    while (a[i] < pivot)
      i++;
    while (a[j] > pivot)
      j--;
    if (i <= j) {
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
      i++;
      j--;
      
    }
  }  
  if (left < j)
      qsort2(a, left, j);

    if (i< right)
      qsort2(a, i, right);
  
  }


int get_digit(int n, int digit){
  int d;
  
  
  n = n / pow(10,digit);
  d=n%10;
 
  //  std::cout << "n="<< n << "  d="<<d<<"\n";
  return d;
  
}

std::vector<int> countsort(std::vector<int> list, int digit){
  std::vector<int> output(list) ;
  int d;
  
  int i,counts[10]={0};
  
  
  for (i = 0 ; i < list.size() ; i++){
    d = get_digit(list[i],digit);
    counts[d] = counts[d]+1;
  }

  for (i=1;i<10;i++){
    counts[i] += counts[i-1];
  }

  for (i = list.size()-1 ; i >=0 ;i--){
    int d = get_digit(list[i],digit);
        
    output[ counts[d]-1 ]=list[i];
    counts[d]--;
  }
  
  return output;
}


std::vector<int> rsort(std::vector<int> list){
  for (int i=0;i<3;i++){
    list = countsort(list,i);
  }
  return list;
}

extern char *optarg;
int main(int argc, char **argv)
{
  bool print = false;
  int  c;
  int size = 10;
  char algorithm ='s'; // m = merge, s = selection, q = quick, r = radix,
  // 2 = qsort2

  
  while ((c=getopt(argc,argv,"ps:a:h")) != -1){
    switch (c){
    case 'h':
      print_help(argv);
      break;
    case 'p' :
      print = true;
      break;
    case 's':
      if (optarg){
	size = std::stoi(optarg);
      }
      break;
    case 'a':
      algorithm = *optarg;
      break;
    }
  }


  
  

  srand(time(NULL));
  std::vector<int> a(size);
  for (int i = 0; i < size; ++i) {
    a[i]=rand()%1000;
  }
  if (print)
    print_vector(a);

  struct timeval tp;
  gettimeofday(&tp,NULL);
  long start_time = tp.tv_sec * 1000 + tp.tv_usec / 1000;
  
  if (algorithm=='s')
    a= ssort(a);
  else if(algorithm == 'm')
    a = msort(a);
  else if(algorithm == 'q')
    a = qsort(a);
  else if(algorithm == '2')
    qsort2(a,0,a.size()-1);
  else if (algorithm =='r'){
    a = rsort(a);
  }
  gettimeofday(&tp,NULL);
  long current_time = tp.tv_sec * 1000 + tp.tv_usec / 1000;
  long elapsed = current_time - start_time;

  std::cout << "Milliseconds to sort: " << elapsed << "\n";
  if (print)
    print_vector(a);
  return 0;
}
