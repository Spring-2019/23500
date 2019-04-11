#include <iostream>
#include <memory> 
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
  ~pt(){
    std::cout << "In the pt destructor\n";
  }
  std::string toString(){
    return "<"+std::to_string(x)+","+std::to_string(y)+">";
  }
};

void f(){
  //  std::shared_ptr<pt> p(new pt(100,200));
  auto p = std::make_shared<pt>(50,22);
  std::cout << p->toString() << "\n";
  auto p2 = std::make_shared<pt>();
  std::cout << p2->toString() << "\n";
  
}

int main()
{
  std::cout << "Before calling f\n";
  f();
  std::cout << "After returning from f\n";



  return 0;
}
