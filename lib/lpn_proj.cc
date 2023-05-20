#include "lpn_proj.h"

LpnProj::LpnProj() = default;
LpnProj::~LpnProj() = default;

std::unique_ptr<Lpn> LpnProj::GetReplica() {
  return std::make_unique<LpnProj>();
}

LpnInfo LpnProj::what() { return LpnInfo{"LpnProj", this}; }
