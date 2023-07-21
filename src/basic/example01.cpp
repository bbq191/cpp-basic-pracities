#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string num1, num2;
  std::cout << "输入 number1: " << std::endl;
  std::cin >> num1;
  std::cout << "enter number 2: " << std::endl;
  std::cin >> num2;

  int number1 = stoi(num1);
  int number2 = stoi(num2);

  std::cout << number1 << "+" << number2 << "=" << number1 + number2
            << std::endl;
  return 0;
}