#include "lpn_proj.h"

LpnProj::LpnProj() = default;
LpnProj::~LpnProj() = default;

std::shared_ptr<Lpn> LpnProj::GetReplica() {
  return std::make_shared<LpnProj>();
}

LpnInfo LpnProj::what() { return LpnInfo{"LpnProj", this}; }
