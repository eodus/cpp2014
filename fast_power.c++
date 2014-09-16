#include <cstdio> // printf()

//x^n evaluation example
int main() {
  double x = -10;
  int n = 10;

  // Save original n for correct output
  int original_n = n;

  // If n is negative, invert sign
  bool invert = (n < 0);
  if (invert) {
    n = -n;
  }

  double res = 1;
  double pw = x;

  // Binary exponentiation

  // Oldschool "fast" code
  /*
   * while (n) {
   *   if (n & 1) res *= pw;
   *   pw *= pw;
   *   n >>= 1;
   * }
   */

  // Universal simple code
  while (n > 0) {
    if (n % 2 == 1) res *= pw;
    pw *= pw;
    n /= 2;
  }

  // Restore sign of n and fix result
  if (invert) {
    n = -n;
    res = 1 / res;
  }

  printf("%lf^%d = %lf\n", x, original_n, res);

  return 0;
}
