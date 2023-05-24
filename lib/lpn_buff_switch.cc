#include "lpn_buff_switch.h"

#include "lpn_buff.h"
#include "lpn_proj.h"

LpnBuffSwitch::LpnBuffSwitch() : Lpn{}, inlined_{}, subquery_{nullptr} {};
LpnBuffSwitch::LpnBuffSwitch(std::shared_ptr<Lpn> subquery)
    : Lpn{}, inlined_{}, subquery_{subquery} {}
LpnBuffSwitch::~LpnBuffSwitch() = default;

std::shared_ptr<Lpn> LpnBuffSwitch::GetReplica() {
  if (this->inlined_)
    return this->subquery_ ? this->subquery_->GetReplica()
                           : std::make_shared<LpnProj>();
  else
    return this->subquery_
               ? std::make_shared<LpnBuff>(this->subquery_->GetReplica())
               : std::make_shared<LpnBuff>();
}

LpnInfo LpnBuffSwitch::what() { return LpnInfo{"LpnBuffSwitch", this}; }

void LpnBuffSwitch::Toggle() { this->inlined_ = !this->inlined_; }

bool LpnBuffSwitch::inlined() { return this->inlined_; }
