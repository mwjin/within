#ifndef LPN_INFO_H_
#define LPN_INFO_H_
#include <string>

class LpnInfo {
 public:
  LpnInfo(std::string type, void* addr);
  std::string ToString() const;

 private:
  std::string type_;
  void* addr_;
};

#endif  // LPN_INFO_H_
