#include "lpn_join.h"

#include <iomanip>
#include <iostream>

LpnJoin::LpnJoin() = default;
LpnJoin::~LpnJoin() = default;

LpnJoin::LpnJoin(std::shared_ptr<Lpn> left_child,
                 std::shared_ptr<Lpn> right_child)
    : left_{left_child}, right_{right_child} {}

std::shared_ptr<Lpn> LpnJoin::GetReplica() {
  return std::make_shared<LpnJoin>(left_->GetReplica(), right_->GetReplica());
}

LpnInfo LpnJoin::what() { return LpnInfo{"LpnJoin", this}; }
void LpnJoin::Print() {
  std::cout << "Root: " << this->what().ToString() << std::endl;
  std::cout << "(Left)" << std::endl;
  this->left_->Print();
  std::cout << "(Right)" << std::endl;
  this->right_->Print();
}

std::shared_ptr<Lpn> LpnJoin::left() const { return left_; }
std::shared_ptr<Lpn> LpnJoin::right() const { return right_; }
