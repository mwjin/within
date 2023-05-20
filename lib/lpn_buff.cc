#include "lpn_buff.h"

LpnBuff::LpnBuff() = default;
LpnBuff::~LpnBuff() = default;

std::unique_ptr<Lpn> LpnBuff::GetReplica() {
  return std::make_unique<LpnBuff>();
}

LpnInfo LpnBuff::what() { return LpnInfo{"LpnBuff", this}; }
