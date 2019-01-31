#include <iostream>

void hanoi(int n, std::string s, std::string d, std::string t){
  if (n==1)
    std::cout << "Move a disk from " << s << " to " << d << "\n";
  else{
    hanoi(n-1,s,t,d);
    hanoi(1,s,d,t);
    hanoi(n-1,t,d,s);
  }
}

int main()
{
  for (int i = 1 ; i < 5; ++i) {
    hanoi(i,"A","B","C");
    std::cout << "\n\n--------------------------\n\n";
  }

  return 0;
}
