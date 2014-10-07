#include<iostream>

using f_d2d = double (*)(double);
using f_i2i = int (*)(int);

int f(int x) {
  return x + 1;
}

double f(double x) {
  return x - 1;
}

int main() {
  auto p1 = static_cast<f_d2d>(f);
  auto p2 = static_cast<f_i2i>(f);
  auto p3 = static_cast<double (*)(double)>(f);
  auto p4 = static_cast<int (*)(int)>(f);
  int (*p5)(int) = static_cast<int (*)(int)>(f);

  std::cout <<  p1(1) << " " << p2(2) << " " << p3(3) << " " << p4(4);
  return 0;
}
