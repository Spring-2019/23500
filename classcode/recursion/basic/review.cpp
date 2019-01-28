#include <iostream>

int fact(int n){
  if (n==0)
    return 1;
  else
    return n * fact(n-1);

}

int fib_iter(int n){
  int a=1,b=1,c=2;
  int i = 0;
  if (n==0) return 0;
  if (n<3) return 1;
  if (n==3) return 2;
  for(i=3;i<n;i++){
    a=b;
    b=c;
    c=a+b;
}
  return c;
}

int fib_recur(int n){
  if (n<2)
    return 1;
  else
    return fib_recur(n-1)+fib_recur(n-2);
}

int fib_tail(int n, int a, int b, int c){
  if (n==0)
    return a;
  else
    return fib_tail(n-1,b,c,b+c);

}

int fibtable[1000];
int fib_dyn(int n){
  if (n==0)
    return 0;
  if (n<3)
    return 1;
  if (fibtable[n] != 0)
    return fibtable[n];
  else{
    int result = fib_dyn(n-1)+fib_dyn(n-2);
    fibtable[n] = result;
    return result;
    
  }
  
}

int main()
{
  for (int i = 0; i < 200; ++i) {
    std::cout << fib_dyn(i) << "\n";
  }
  std::cout << "\n";

  
  return 0;
}
