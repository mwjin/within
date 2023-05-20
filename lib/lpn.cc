#include "lpn.h"

Lpn::Lpn() = default;
Lpn::~Lpn() = default;

LpnInfo Lpn::what() { return LpnInfo{"Lpn", this}; }
