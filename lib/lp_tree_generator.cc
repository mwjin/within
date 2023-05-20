#include "lp_tree_generator.h"

#include <cmath>

LpTreeGenerator::LpTreeGenerator(
    std::shared_ptr<Lpn> tree_template,
    std::list<std::shared_ptr<LpnBuffSwitch>>& buff_switches)
    : tree_template_{tree_template},
      buff_switches_{buff_switches.begin(), buff_switches.end()},
      toggle_cnt_{} {
  toggle_cnt_ = pow(2, buff_switches_.size() - 1);
}
LpTreeGenerator::~LpTreeGenerator() = default;

void LpTreeGenerator::ToggleSwitches() {
  for (int i = buff_switches_.size() - 1; i >= 0; --i) {
    buff_switches_.at(i)->Toggle();
    if (buff_switches_.at(i)->use_buff()) break;
  }
  --toggle_cnt_;
}
