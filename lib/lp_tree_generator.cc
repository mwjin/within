#include "lp_tree_generator.h"

LpTreeGenerator::LpTreeGenerator(
    std::shared_ptr<Lpn> tree_template,
    std::list<std::shared_ptr<LpnBuffSwitch>>& buff_switches)
    : tree_template_{tree_template},
      buff_switches_{buff_switches.begin(), buff_switches.end()} {}
LpTreeGenerator::~LpTreeGenerator() = default;
