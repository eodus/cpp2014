#include <cstdio>

int main() {
  int i = 1, j = 2, k = 4;
  i = j = k -= 2;
  printf("1) i = %d, j = %d, k = %d\n", i, j, k);
  k = j = i++;
  printf("2) i = %d, j = %d, k = %d\n", i, j, k);
  i ^= k; k ^= i; i ^= k;
  printf("3) i = %d, j = %d, k = %d\n", i, j, k);

  i = 5,3; k = 6,4; j = 8,2;
  printf("4) i = %d, j = %d, k = %d\n", i, j, k);
  i = j & k;
  j = k ^ i;
  k = j || k;
  printf("5) i = %d, j = %d, k = %d\n", i, j, k);
  i = j; j = k; k = i;
  printf("6) i = %d, j = %d, k = %d\n", i, j, k);

  i = 2; j = 10; k = 7;
  i = double(--j / k) / i * k++;
  printf("7) i = %d, j = %d, k = %d\n", i, j, k);

  return 0;
}
// Output: 3 2 4 19 17 5 0 0 0 0
