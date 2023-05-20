#include "lpn_buff_switch.h"

#include "lpn_buff.h"
#include "lpn_proj.h"

LpnBuffSwitch::LpnBuffSwitch() : Lpn{}, use_buff_{false} {};
LpnBuffSwitch::~LpnBuffSwitch() = default;

std::shared_ptr<Lpn> LpnBuffSwitch::GetReplica() {
  if (this->use_buff_)
    return std::make_shared<LpnBuff>();
  else
    return std::make_shared<LpnProj>();
}

LpnInfo LpnBuffSwitch::what() { return LpnInfo{"LpnBuffSwitch", this}; }

void LpnBuffSwitch::Toggle() { this->use_buff_ = !this->use_buff_; }

bool LpnBuffSwitch::use_buff() { return this->use_buff_; }
