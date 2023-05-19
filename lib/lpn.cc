#include "lpn.h"

#include <iomanip>
#include <iostream>

Lpn::Lpn() = default;
Lpn::~Lpn() = default;

void Lpn::what() {
  std::cout << "Lpn(" << std::hex << this << ")" << std::endl;
}
