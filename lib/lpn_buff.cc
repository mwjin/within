#include "lpn_buff.h"

LpnBuff::LpnBuff() = default;
LpnBuff::~LpnBuff() = default;

std::shared_ptr<Lpn> LpnBuff::GetReplica() {
  return std::make_shared<LpnBuff>();
}

LpnInfo LpnBuff::what() { return LpnInfo{"LpnBuff", this}; }
