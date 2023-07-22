#include <iostream>
#include <string>

// const 与 #define 的区别
#define DPI 99 // 仅仅只是字符替换，dpi和99等价

// 全局变量与常量
int number{123};
const double PI{3.1415926};

int main(int argc, char *argv[]) {
  std::cout << "number: " << number << std::endl;
  std::cout << "PI: " << PI << std::endl;

  // 局部变量与常量
  int age = 40;
  const double weight = 10.11;
  std::cout << "age: " << age << std::endl;
  std::cout << "now weight:" << weight + 55.2 << std::endl;

  int dpi_int{DPI};
  std::string dpi_str{DPI}; // 直接用 string 包裹的时候，不能查出ascii长度
  std::cout << "dpi int: " << dpi_int << std::endl;
  std::cout << "dpi str: " << dpi_str << std::endl;
  return 0;
}