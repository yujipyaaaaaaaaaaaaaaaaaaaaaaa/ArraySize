#include <iostream>
#include <vector>

template<typename T>
void size(T a[]){
  std::cout << sizeof(a) << std::endl;
}


int main(void){
  int a[10];
  double b[20];
  std::vector<int> c(30);

  int* d = new int[40];
  double* e = new double[50];

  std::cout << sizeof(a) << std::endl;
  std::cout << sizeof(b) << std::endl;
  std::cout << sizeof(a) / sizeof(a[0]) << std::endl;
  std::cout << sizeof(b) / sizeof(b[0]) << std::endl;
  std::cout << sizeof(c) << std::endl;
  std::cout << c.size() << std::endl;
  std::cout << sizeof(d) << std::endl;
  std::cout << sizeof(e) << std::endl;

  size(a);
  size(b);
  size(d);
  size(e);


  delete d;
  delete e;

  ///// outputs start
  // 40
  // 160
  // 10
  // 20
  // 24
  // 30
  // 8
  // 8
  // 8
  // 8
  // 8
  // 8
  ///// outputs end
}
