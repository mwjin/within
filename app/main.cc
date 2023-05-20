#include <iostream>

#include "lpn_buff_switch.h"

int main(int, char**) {
  auto buff_switch{std::make_unique<LpnBuffSwitch>()};
  auto proj{buff_switch->GetReplica()};
  std::cout << proj->what().ToString() << std::endl;

  buff_switch->Toggle();
  auto buff{buff_switch->GetReplica()};
  std::cout << buff->what().ToString() << std::endl;
}
