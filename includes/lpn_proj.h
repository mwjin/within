#ifndef LPN_PROJ_H_
#define LPN_PROJ_H_

#include "lpn.h"

class LpnProj : public Lpn {
 public:
  LpnProj();
  virtual ~LpnProj();
  virtual std::unique_ptr<Lpn> GetReplica() override;
  virtual LpnInfo what() override;
};

#endif  // LPN_PROJ_H_
