#include <iostream>
#include <list>

#include "lp_tree_generator.h"
#include "lpn_buff_switch.h"
#include "lpn_join.h"
#include "lpn_proj.h"
#include "optimizer.h"
#include "path.h"
#include "transformer.h"

int main() {
  auto buff_switch1{
      std::make_shared<LpnBuffSwitch>(std::make_shared<LpnProj>())};
  auto buff_switch2{
      std::make_shared<LpnBuffSwitch>(std::make_shared<LpnProj>())};
  auto buff_switch3{
      std::make_shared<LpnBuffSwitch>(std::make_shared<LpnProj>())};

  std::list<std::shared_ptr<LpnBuffSwitch>> buff_switches{};
  buff_switches.push_back(buff_switch1);
  buff_switches.push_back(buff_switch2);
  buff_switches.push_back(buff_switch3);

  auto sub_join{std::make_shared<LpnJoin>(buff_switch1, buff_switch2)};
  auto join{std::make_shared<LpnJoin>(sub_join, buff_switch3)};

  Transformer transformer{};
  Optimizer optimizer{};

  std::shared_ptr<Path> best_path{nullptr};
  LpTreeGenerator lp_tree_generator{join, buff_switches};
  int lp_tree_cnt{1};

  while (lp_tree_generator.CanGenerate()) {
    auto lp_tree{lp_tree_generator.GenerateLpTree()};
    std::cout << "Lp Tree #" << lp_tree_cnt++ << std::endl;
    lp_tree->Print();
    std::cout << std::endl;

    auto optimized_lp_tree{transformer.TransformLp(lp_tree)};
    auto path{optimizer.BuildBestPath(optimized_lp_tree)};

    if (!best_path || best_path->cost() > path->cost()) best_path = path;
    lp_tree_generator.FixInlined();
  }
};
