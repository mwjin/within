#include "lpn_info.h"

#include <iomanip>
#include <sstream>

LpnInfo::LpnInfo(std::string type, void* addr) : type_{type}, addr_{addr} {};

std::string LpnInfo::ToString() const {
  std::stringstream ss{};
  ss << type_ << "(" << std::hex << addr_ << ")";
  return ss.str();
}
