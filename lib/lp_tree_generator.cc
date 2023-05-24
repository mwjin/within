#include "lp_tree_generator.h"

LpTreeGenerator::LpTreeGenerator(
    std::shared_ptr<Lpn> tree_template,
    std::list<std::shared_ptr<LpnBuffSwitch>>& buff_switches)
    : tree_template_{tree_template},
      buff_switches_{buff_switches.begin(), buff_switches.end()},
      switch_idx_{-1},
      prev_toggle_idx_{-1} {}
LpTreeGenerator::~LpTreeGenerator() = default;

std::shared_ptr<Lpn> LpTreeGenerator::GenerateLpTree() {
  ToggleSwitch();  // Inlined
  auto result{tree_template_->GetReplica()};
  ToggleSwitch();  // Buff
  prev_toggle_idx_ = switch_idx_;
  switch_idx_++;
  return result;
}

void LpTreeGenerator::ToggleSwitch() {
  if (switch_idx_ >= 0 && switch_idx_ < buff_switches_.size())
    buff_switches_.at(switch_idx_)->Toggle();
}

void LpTreeGenerator::FixInlined() {
  if (prev_toggle_idx_ >= 0 && prev_toggle_idx_ < buff_switches_.size())
    buff_switches_.at(prev_toggle_idx_)->Toggle();
}

bool LpTreeGenerator::CanGenerate() {
  return switch_idx_ < static_cast<int>(buff_switches_.size());
}
