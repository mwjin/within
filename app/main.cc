#include <iostream>

#include "lpn_buff.h"
#include "lpn_proj.h"

int main(int, char**) {
  auto buff{std::make_unique<LpnBuff>()};
  buff->what();
  buff->GetReplica()->what();

  auto proj{std::make_unique<LpnProj>()};
  proj->what();
  proj->GetReplica()->what();
}
