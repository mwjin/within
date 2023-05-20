#ifndef TRANSFORMER_H_
#define TRANSFORMER_H_

#include "lpn.h"

class Transformer {
 public:
  Transformer();
  ~Transformer();
  std::shared_ptr<Lpn> TransformLp(std::shared_ptr<Lpn> lp_tree);
};

#endif  // TRANSFORMER_H_
