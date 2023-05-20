#ifndef LPN_BUFF_H_
#define LPN_BUFF_H_

#include "lpn.h"

class LpnBuff : public Lpn {
 public:
  LpnBuff();
  ~LpnBuff();
  virtual std::shared_ptr<Lpn> GetReplica() override;
  virtual LpnInfo what() override;
};

#endif  // LPN_BUFF_H_
