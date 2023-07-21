#include <cstddef>
#include <iostream>
#include <string>

// 基本输入输出流入门
int main(int argc, char *argv[]) {
  std::string num1, num2;
  std::cout << "输入 number1: ";
  std::cin >> num1;
  std::cout << "enter number 2: ";
  std::cin >> num2;

  int number1 = stoi(num1);
  int number2 = stoi(num2);

  std::cout << number1 << "+" << number2 << "=" << number1 + number2
            << std::endl;

  std::printf("%d + %d = %d\n", number1, number2, number1 + number2);

  if (argc != 1) {
    std::cout << "you input " << argc << " arguments" << std::endl;
    for (size_t i = 0; i < argc; i++) {
      std::cout << "第" << i << "个arg是：" << argv[i] << std::endl;
    }
  }
  return 0;
}