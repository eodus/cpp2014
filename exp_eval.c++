#include <cstdio>

const int niter = 100;

//exp(x) evaluation example
int main() {
  double x = -1000;

  bool invert = (x < 0);
  if (invert) {
    x = -x;
  }

  double res = 0;
  double pw = 1;
  double fac = 1;

  for (int i = 0; i < niter; ++i) {
    res += pw/fac;
    fac *= (i+1);
    pw *= x;
  }

  if (invert) {
    res = 1 / res;
    x = -x;
  }

  printf("exp(%lf) = %lf\n", x, res);

  return 0;
}
