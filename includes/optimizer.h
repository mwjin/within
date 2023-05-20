#ifndef OPTIMIZER_H_
#define OPTIMIZER_H_

#include <memory>

#include "lpn.h"
#include "path.h"

class Optimizer {
 public:
  Optimizer();
  ~Optimizer();
  std::shared_ptr<Path> BuildBestPath(std::shared_ptr<Lpn> lp_tree);
};

#endif  // OPTIMIZER_H_
