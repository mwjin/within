#include "optimizer.h"

#include "path_proj.h"

Optimizer::Optimizer() = default;
Optimizer::~Optimizer() = default;

std::shared_ptr<Path> Optimizer::BuildBestPath(std::shared_ptr<Lpn> lp_tree) {
  return std::make_shared<PathProj>();
}
