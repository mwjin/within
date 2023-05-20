#ifndef PATH_H_
#define PATH_H_

class Path {
 public:
  Path();
  virtual ~Path() = 0;
  double cost();

 private:
  double cost_;
};
#endif  // PATH_H_
