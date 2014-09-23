#include <cstdio>

// ?: demo and short scheme computations demo
int main() {
  {
    int n = 13423432;
    while (n) {
      printf(n & 1 ? "Zero\n" : "One\n");
      n >>= 1;
    }
  }

  double x = 15;
  (x < 10) ? printf("Less\n") : printf("More\n"); // OR
  printf("%s\n", (x < 10) ? "Less" : "More");


  {
    int n = 19;
    n += (n % 2) ? 1 : 0; // Of course, one can use n & 1;
  }

  // Short scheme demo
  {
    int k = -10;

    (k > 0) || printf("Warning! k <= 0\n");

    k && printf("k is not null!\n");
  }

  return 0;
}
