/**
 * @file example04.cpp
 * @author Vinci Xu (i@ikate.com)
 * @brief
 * @version 0.1
 * @date 2023-07-25
 *
 * @copyright Copyright (c) 2023
 * 位运算符
 */
#include <iostream>

int main(int argc, char *argv[]) {

  int a{3}, b{5};
  std::cout << "a|b: " << (a | b) << std::endl;
  std::cout << "a&b: " << (a & b) << std::endl;
  std::cout << "a^b: " << (a ^ b) << std::endl;
  std::cout << "~b: " << (~b) << std::endl;
  std::cout << "a<<3: " << (a << 3) << std::endl;
  std::cout << "a>>2: " << (a >> 2) << std::endl;
  return 0;
}
