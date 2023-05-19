#ifndef LPN_H_
#define LPN_H_

#include <memory>

class Lpn {
 public:
  Lpn();
  virtual ~Lpn();
  virtual std::unique_ptr<Lpn> GetReplica() = 0;
  virtual void what();
};

#endif  // LPN_H_
