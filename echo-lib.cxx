#include <iostream>

extern "C" void cat() {
  std::cout << "meow" << std::endl;
}
