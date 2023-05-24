#ifndef LPN_BUFF_SWITCH_H_
#define LPN_BUFF_SWITCH_H_

#include "lpn.h"

class LpnBuffSwitch : public Lpn {
 public:
  LpnBuffSwitch();
  LpnBuffSwitch(std::shared_ptr<Lpn> subquery);
  ~LpnBuffSwitch();
  virtual std::shared_ptr<Lpn> GetReplica() override;
  virtual LpnInfo what() override;
  void Toggle();
  bool inlined();

 private:
  bool inlined_;
  std::shared_ptr<Lpn> subquery_;
};

#endif  // LPN_BUFF_SWITCH_H_
