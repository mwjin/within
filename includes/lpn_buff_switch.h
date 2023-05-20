#ifndef LPN_BUFF_SWITCH_H_
#define LPN_BUFF_SWITCH_H_

#include "lpn.h"

class LpnBuffSwitch : public Lpn {
 public:
  LpnBuffSwitch();
  virtual ~LpnBuffSwitch();
  virtual std::unique_ptr<Lpn> GetReplica() override;
  virtual LpnInfo what() override;
  void Toggle();
  bool use_buff();

 private:
  bool use_buff_;
};

#endif  // LPN_BUFF_SWITCH_H_
