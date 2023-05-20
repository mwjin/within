#include "lp_tree_generator.h"

#include <cmath>

LpTreeGenerator::LpTreeGenerator(
    std::shared_ptr<Lpn> tree_template,
    std::list<std::shared_ptr<LpnBuffSwitch>>& buff_switches)
    : tree_template_{tree_template},
      buff_switches_{buff_switches.begin(), buff_switches.end()},
      toggle_cnt_{} {
  toggle_cnt_ = pow(2, buff_switches_.size());
}
LpTreeGenerator::~LpTreeGenerator() = default;

std::shared_ptr<Lpn> LpTreeGenerator::GenerateLpTree() {
  if (toggle_cnt_ == 0) return nullptr;
  auto result{tree_template_->GetReplica()};
  ToggleSwitches();
  return result;
}

void LpTreeGenerator::ToggleSwitches() {
  for (int i = buff_switches_.size() - 1; i >= 0; --i) {
    buff_switches_.at(i)->Toggle();
    if (buff_switches_.at(i)->use_buff()) break;
  }
  --toggle_cnt_;
}

bool LpTreeGenerator::CanGenerate() { return toggle_cnt_ > 0; }
