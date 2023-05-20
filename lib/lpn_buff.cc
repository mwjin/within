#include "lpn_buff.h"

LpnBuff::LpnBuff() : Lpn{}, subquery_{nullptr} {};
LpnBuff::LpnBuff(std::shared_ptr<Lpn> subquery) : subquery_{subquery} {}
LpnBuff::~LpnBuff() = default;

std::shared_ptr<Lpn> LpnBuff::GetReplica() {
  return subquery_ ? std::make_shared<LpnBuff>(subquery_->GetReplica())
                   : std::make_shared<LpnBuff>();
}

LpnInfo LpnBuff::what() { return LpnInfo{"LpnBuff", this}; }
