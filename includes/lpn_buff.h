#ifndef LPN_BUFF_H_
#define LPN_BUFF_H_

#include "lpn.h"

class LpnBuff : public Lpn {
 public:
  LpnBuff();
  LpnBuff(std::shared_ptr<Lpn> subquery);
  ~LpnBuff();
  virtual std::shared_ptr<Lpn> GetReplica() override;
  virtual LpnInfo what() override;

 private:
  std::shared_ptr<Lpn> subquery_;
};

#endif  // LPN_BUFF_H_
