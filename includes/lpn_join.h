#ifndef LPN_JOIN_H_
#define LPN_JOIN_H_

#include "lpn.h"

class LpnJoin : public Lpn {
 public:
  LpnJoin();
  LpnJoin(std::shared_ptr<Lpn> left_child, std::shared_ptr<Lpn> right_child);
  ~LpnJoin();
  virtual std::shared_ptr<Lpn> GetReplica() override;
  virtual LpnInfo what() override;
  virtual void Print() override;
  std::shared_ptr<Lpn> left() const;
  std::shared_ptr<Lpn> right() const;

 private:
  std::shared_ptr<Lpn> left_;
  std::shared_ptr<Lpn> right_;
};

#endif  // LPN_JOIN_H_
