#include <iostream>

class pt{

private:
  int x,y;
public:
  pt(){
    this->x = 0;
    this->y = 0;
  }
  pt(int x, int y){
    this->x = x;
    this->y = y;
  }
  std::string toString(){
    return "<"+std::to_string(x)+","+std::to_string(y)+">";
  }
};


int main()
{
  pt *p = new pt(5,2);

  std::cout << p->toString() << "\n";
  return 0;
}
