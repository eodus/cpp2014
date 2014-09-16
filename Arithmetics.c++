#include <cstdio>   // printf()
#include <cstdlib>  // system()
#include <iostream> // std::cin (for key pressing waiting)
#include <typeinfo> // typeinfo::name()

int main(int argc, char* argv[]) {
  printf("Simple integral arithmetics:\n");
  printf("1 + 1 = %d\n", 1 + 1);
  printf("3 * 3 = %d\n", 3 * 3);
  printf("5 - 8 = %d\n", 5 - 8);
  printf("18 / 7 = %d\n", 18 / 7);
  printf("18 %% 7 = %d\n", 18 % 7);
  printf("-18 / 7 = %d\n", -18 / 7);
  printf("-18 %% 7 = %d\n", -18 % 7);
  printf("18 / -7 = %d\n", 18 / -7);
  printf("18 %% -7 = %d\n", 18 % -7);
  printf("-18 / -7 = %d\n", -18 / -7);
  printf("-18 %% -7 = %d\n", -18 % -7);

  printf("\n\n");
  printf("Bitwise operations:\n");
  printf("1 | 5 = %d\n", 1 | 5);
  printf("3 & 7 = %d\n", 3 & 7);
  printf("5 ^ 8 = %d\n", 5 ^ 8);
  printf("~18 = %d\n", ~18);
  printf("18 >> 2 = %d\n", 18 >> 2);
  printf("5 << 3 = %d\n", 5 << 3);
  printf("UB: -18 >> 2 = %d\n", -18 >> 2); //This is UB
  printf("UB: -5 << 3 = %d\n", -5 << 3);   //And this is UB too

  printf("\n\n");
  printf("Increments and so on:\n");

  int i = 10;
  ++i;
  printf("int i = 10; ++i;\n");
  printf("i = %d\n", i);
  printf("i++ = %d\n", i++);
  printf("--i = %d\n", --i);
  printf("(i += 10) = %d\n", i += 10);

  printf("\n\n");
  printf("Type cast:\n");
  printf("3 / 2 = %d\n", 3 / 2);
  printf("(double)(3) / 2 = %lf\n", (double)(3) / 2);
  printf("static_cast<double>(3) / 2 = %lf\n", static_cast<double>(3) / 2);

  const char *sz = "Hello";
  printf("(long long int)(sz) = %lld\n", (long long int)(sz));
  //printf("static_cast<long long int>(sz) = %lld\n", static_cast<long long int>(sz)); //Cast error

  printf("\n\n");
  printf("sizeof() and typeid:\n");
  printf("sizeof(3 / 2) = %u; typeid(3 / 2).name(): %s\n", sizeof(3 / 2), typeid(3 / 2).name());
  printf("sizeof(3. / 2.) = %u; typeid(3. / 2.).name(): %s\n", sizeof(3. / 2.), typeid(3. / 2.).name());

  // Wait for key pressing.
  std::cin.get();
  // In Windows one can use something like `system("pause");`

  return 0;
}

/* OUTPUT
 * Simple integral arithmetics:
 * 1 + 1 = 2
 * 3 * 3 = 9
 * 5 - 8 = -3
 * 18 / 7 = 2
 * 18 % 7 = 4
 * -18 / 7 = -2
 *  -18 % 7 = -4
 *  18 / -7 = -2
 *  18 % -7 = 4
 *  -18 / -7 = 2
 *  -18 % -7 = -4
 *
 *
 *  Bitwise operations:
 *  1 | 5 = 5
 *  3 & 7 = 3
 *  5 ^ 8 = 13
 *  ~18 = -19
 *  18 >> 2 = 4
 *  5 << 3 = 40
 *  UB: -18 >> 2 = -5
 *  UB: -5 << 3 = -40
 *
 *
 *  Increments and so on:
 *  int i = 10; ++i;
 *  i = 11
 *  i++ = 11
 *  --i = 11
 *  (i += 10) = 21
 *
 *
 *  Type cast:
 *  3 / 2 = 1
 *  (double)(3) / 2 = 1.500000
 *  static_cast<double>(3) / 2 = 1.500000
 *  (long long int)(sz) = 4197628
 *
 *
 *  sizeof() and typeid:
 *  sizeof(3 / 2) = 4; typeid(3 / 2).name(): i
 *  sizeof(3. / 2.) = 8; typeid(3. / 2.).name(): d
 */
