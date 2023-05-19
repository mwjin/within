#include <iostream>

#include "lpn_buff_switch.h"

int main(int, char**) {
  auto buff_switch{std::make_unique<LpnBuffSwitch>()};
  auto proj{buff_switch->GetReplica()};
  proj->what();

  buff_switch->Toggle();
  auto buff{buff_switch->GetReplica()};
  buff->what();
}
