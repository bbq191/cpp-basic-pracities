#include <iostream>

// sizeof 与 auto
int main(int arc, char *argv[]) {
  std::cout << "int: " << sizeof(int) << std::endl;
  std::cout << "char: " << sizeof(char) << std::endl;
  std::cout << "bool: " << sizeof(bool) << std::endl;
  std::cout << "float: " << sizeof(float) << std::endl;
  std::cout << "double: " << sizeof(double) << std::endl;
  std::cout << "long: " << sizeof(long) << std::endl;
  std::cout << "long long: " << sizeof(long long) << std::endl;
  std::cout << "unsigned long: " << sizeof(unsigned long) << std::endl;
  std::cout << "size_t: " << sizeof(size_t) << std::endl;
  std::cout << "----------------" << std::endl;

  std::cout << "int: " << sizeof(int *) << std::endl;
  std::cout << "char: " << sizeof(char *) << std::endl;
  std::cout << "bool: " << sizeof(bool *) << std::endl;
  std::cout << "float: " << sizeof(float *) << std::endl;
  std::cout << "----------------" << std::endl;

  auto val1{12};
  auto val2{12.123f};
  auto val3{"kkkkkk"};
  auto val4{12ll};
  auto val5{12.123l};
  std::cout << "val1: " << sizeof(val1) << std::endl;
  std::cout << "val2: " << sizeof(val2) << std::endl;
  std::cout << "val3: " << sizeof(val3) << std::endl;
  std::cout << "val4: " << sizeof(val4) << std::endl;
  std::cout << "val5: " << sizeof(val5) << std::endl;
}
