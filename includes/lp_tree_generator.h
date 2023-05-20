#ifndef LP_TREE_GENERATOR_H_
#define LP_TREE_GENERATOR_H_

#include <list>
#include <memory>
#include <vector>

#include "lpn_buff_switch.h"

class LpTreeGenerator {
 public:
  LpTreeGenerator(std::shared_ptr<Lpn> tree_template,
                  std::list<std::shared_ptr<LpnBuffSwitch>>& buff_switches);
  ~LpTreeGenerator();
  std::shared_ptr<Lpn> GenerateLpTree();

 private:
  void ToggleSwitches();

  std::shared_ptr<Lpn> tree_template_;
  std::vector<std::shared_ptr<LpnBuffSwitch>> buff_switches_;
  int toggle_cnt_;
};

#endif  // LP_TREE_GENERATOR_H_
