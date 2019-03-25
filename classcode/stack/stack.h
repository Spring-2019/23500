#pragma once

class stack {

 private:

  int a[5];
  int top = 0;

 public:
  int pop();
  void push(int);
};
