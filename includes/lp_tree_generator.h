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
  void FixInlined();
  bool CanGenerate();

 private:
  void ToggleSwitch();

  std::shared_ptr<Lpn> tree_template_;
  std::vector<std::shared_ptr<LpnBuffSwitch>> buff_switches_;
  int switch_idx_;
  int prev_toggle_idx_;
};

#endif  // LP_TREE_GENERATOR_H_
