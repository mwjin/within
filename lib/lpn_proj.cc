#include "lpn_proj.h"

#include <iomanip>
#include <iostream>

LpnProj::LpnProj() = default;
LpnProj::~LpnProj() = default;

std::unique_ptr<Lpn> LpnProj::GetReplica() {
  return std::make_unique<LpnProj>();
}

void LpnProj::what() {
  std::cout << "LpnProj(" << std::hex << this << ")" << std::endl;
}
