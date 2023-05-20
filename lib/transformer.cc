#include "transformer.h"

Transformer::Transformer() = default;
Transformer::~Transformer() = default;

std::shared_ptr<Lpn> Transformer::TransformLp(std::shared_ptr<Lpn> lp_tree) {
  // TODO: Rule-Based Optimization
  return lp_tree;
}
