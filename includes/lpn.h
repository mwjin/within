#ifndef LPN_H_
#define LPN_H_

#include <memory>

#include "lpn_info.h"

class Lpn {
 public:
  Lpn();
  virtual ~Lpn();
  virtual std::shared_ptr<Lpn> GetReplica() = 0;
  virtual LpnInfo what();
};

#endif  // LPN_H_
