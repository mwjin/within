#include "lpn.h"

#include <iostream>

Lpn::Lpn() = default;
Lpn::~Lpn() = default;

LpnInfo Lpn::what() { return LpnInfo{"Lpn", this}; }
void Lpn::Print() {
  std::cout << "Root: " << this->what().ToString() << std::endl;
}
