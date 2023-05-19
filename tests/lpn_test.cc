#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "lpn_buff.h"
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
}  // namespace
}  // namespace lpn
