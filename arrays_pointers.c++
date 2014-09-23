#include <cstdio>

int main() {
  int a[10] = {1, 2, 3, 4, 5};
  int *p1 = a + 4;

  --p1;
  int *p2 = p1 - 2;

  p2[1]++;

  p1[2] = ++a[3];

  ++p1;
  p1[-1] = 19;

  *p1 = 17;

  *(p2-1) = 3;

  for (int i = 0; i < 10; ++i)
    printf("%d ", a[i]);

  // UB, out of range
  printf("%d ", a[99]);
  return 0;
}

// Output: 3 2 4 19 17 5 0 0 0 0 ?
