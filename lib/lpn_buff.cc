#include "lpn_buff.h"

#include <iomanip>
#include <iostream>

LpnBuff::LpnBuff() = default;
LpnBuff::~LpnBuff() = default;

std::unique_ptr<Lpn> LpnBuff::GetReplica() {
  return std::make_unique<LpnBuff>();
}

void LpnBuff::what() {
  std::cout << "LpnBuff(" << std::hex << this << ")" << std::endl;
}
