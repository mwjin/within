#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "lpn_buff.h"
#include "lpn_buff_switch.h"
#include "lpn_proj.h"

namespace lpn {
namespace {
TEST(LpnTest, ReplicateLpnBuff) {
  auto lpn{std::make_unique<LpnBuff>()};
  auto replica{lpn->GetReplica()};
  EXPECT_NE(lpn.get(), replica.get());
}

TEST(LpnTest, ReplicateLpnProj) {
  auto lpn{std::make_unique<LpnProj>()};
  auto replica{lpn->GetReplica()};
  EXPECT_NE(lpn.get(), replica.get());
}

TEST(LpnTest, ToggleLpnBuffSwitch) {
  auto buff_switch{std::make_unique<LpnBuffSwitch>()};
  auto before_toggle{buff_switch->GetReplica()};

  buff_switch->Toggle();
  auto after_toggle{buff_switch->GetReplica()};

  EXPECT_NE(before_toggle->what().ToString(), after_toggle->what().ToString());
}
}  // namespace
}  // namespace lpn
