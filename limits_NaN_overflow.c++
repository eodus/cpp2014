#define _USE_MATH_DEFINES // M_PI, M_E
#include <cmath>          // sqrt(, M_PI, M_E)
#include <cstdio>         // printf()
#include <cstdlib>        // system()
#include <iostream>       // std::cin
#include <limits>         // std::numeric_limits
#include <cfloat>         // DBL_MAX
#include <climits>        // INT_MAX
#include <typeinfo>       // typeinfo::name()

int main(int argc, char* argv[]) {
  printf("Different numeric types, suffixes and it's output:\n");
  printf("int(%%d): %d\n", 42);
  printf("long long int(%%lld): %lld\n", 424242424242424242ll);
  printf("unsigned int(%%x) --- hexadecimal: %x\n", 42);
  printf("unsigned int(%%X) --- HEXADECIMAL: %X\n", 42);
  printf("unsigned int(%%o) --- octal: %o\n", 42);
  printf("unsigned int(%%b) --- binary: %b\n", 42); // Not standard, but supported somewhere
  printf("unsigned long long int(%%llu): %llu\n", 424242424242424242llu);

  auto h = 0xDEADBEEF; // Hexadecimal constant
  auto o = 01234567;   // Octal constant
  auto b = 0b1010101;   // Binary constant
  // Real type of integer constant is the least sufficiently large SIGNED integral type
  // Real type of unsigned constant is the least sufficiently large UNSIGNED integral type
  // Real type of hexadecimal, octal or binary constant\
  is the least sufficiently large SIGNED OR UNSIGNED integral type

  printf("float(%%f): %f\n", 3.14F);
  printf("double(%%lf): %lf\n", 3.14);
  printf("long double(%%Lf): %Lf\n", 6.022'141'29e23L); // '-s allowed in C++14

  printf("double(%%lE): %lE //Scientific format\n", 3.14);
  printf("double(%%lE): %lE //Scientific format\n", 6.022'141'29e23); // '-s allowed in C++14
  printf("\n\n");

  printf("sizeof() & typeid():\n");
  printf("sizeof(int) = %u\n", sizeof(int));
  int i;
  printf("sizeof(i) = %u\n", sizeof(i));
  printf("typeid(i).name() = %s\n", typeid(i).name());

  printf("typeid(10u + 5).name() = %s\n", typeid(10u + 5).name());

  printf("\n\n");

  printf("<cmath> demo:\n");
  printf("sqrt(%lf) = %lf\n", 3.0, sqrt(3.0));
  printf("pi = %lf\n", M_PI);
  printf("e = %lf\n", M_E);
  printf("\n\n");


  printf("Infinity, NaN and overflow:\n");
  printf("+INF = %lf\n", std::numeric_limits<double>::infinity());
  printf("NaN = %lf\n", std::numeric_limits<double>::quiet_NaN());
  printf("sqrt(-1) = %lf //It's also NaN\n", sqrt(-1.0));
  printf("std::isnan(sqrt(-1)) = %d\n", std::isnan(sqrt(-1.0)));


  printf("max(double) = %lf\n", std::numeric_limits<double>::max());
  printf("max(double) = %lf\n", DBL_MAX);
  printf("And in scientific format max(double) = %lE\n", DBL_MAX);

  printf("\n");
  printf("max(int) = %d\n", INT_MAX);
  printf("max(int) = %d\n", std::numeric_limits<int>::max());
  printf("min(int) = %d\n", INT_MIN);
  printf("min(int) = %d\n", std::numeric_limits<int>::min());
  printf("max(unsigned) = %u\n", UINT_MAX);
  printf("min(unsigned) = %u\n", std::numeric_limits<unsigned>::min());

  printf("\n\n");

  printf("Integral overflow demo:\n");
  printf("UB: max(int) + 1 = %d\n", std::numeric_limits<int>::max() + 1); // E.g. for compiler \
  can assume that (a > b) => (a + 1 > b)
  printf("OK: max(unsigned) + 1 = %u\n", std::numeric_limits<unsigned>::max() + 1);
  printf("\n");

  printf("Floating point overflow demo:\n");
  printf("UB: max(double) * 2.0 = %lf\n", std::numeric_limits<double>::max() * 2.0);
  printf("\n");

  printf("Lack of precision in f.p. operations:\n");
  printf("max(double)/2 = %lf\n", std::numeric_limits<double>::max()/2);
  printf("max(double)/2 + 1 = %lf\n", std::numeric_limits<double>::max()/2 + 1);

  // Wait for key pressing.
  std::cin.get();
  // In Windows one can use something like `system("pause");`

  return 0;
}

/* Output
 * Different numeric types, suffixes and it's output:
 * int(%d): 42
 * long long int(%lld): 424242424242424242
 * unsigned int(%x) --- hexadecimal: 2a
 * unsigned int(%X) --- HEXADECIMAL: 2A
 * unsigned int(%o) --- octal: 52
 * unsigned int(%b) --- binary: %b
 * unsigned long long int(%llu): 424242424242424242
 * float(%f): 3.140000
 * double(%lf): 3.140000
 * long double(%Lf): 602214129000000000000000.000000
 * double(%lE): 3.140000E+00 //Scientific format
 * double(%lE): 6.022141E+23 //Scientific format
 *
 *
 * sizeof() & typeid():
 * sizeof(int) = 4
 * sizeof(i) = 4
 * typeid(i).name() = i
 * typeid(10u + 5).name() = j
 *
 *
 * <cmath> demo:
 * sqrt(3.000000) = 1.732051
 * pi = 3.141593
 * e = 2.718282
 *
 *
 * Infinity, NaN and overflow:
 * +INF = inf
 * NaN = nan
 * sqrt(-1) = -nan //It's also NaN
 * std::isnan(sqrt(-1)) = 1
 * max(double) = 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000
 * max(double) = 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000
 * And in scientific format max(double) = 1.797693E+308
 *
 * max(int) = 2147483647
 * max(int) = 2147483647
 * min(int) = -2147483648
 * min(int) = -2147483648
 * max(unsigned) = 4294967295
 * min(unsigned) = 0
 *
 *
 * Integral overflow demo:
 * UB: max(int) + 1 = -2147483648
 * OK: max(unsigned) + 1 = 0
 *
 * Floating point overflow demo:
 * UB: max(double) * 2.0 = inf
 *
 * Lack of precision in f.p. operations:
 * max(double)/2 = 89884656743115785407263711865852178399035283762922498299458738401578630390014269380294779316383439085770229476757191232117160663444732091384233773351768758493024955288275641038122745045194664472037934254227566971152291618451611474082904279666061674137398913102072361584369088590459649940625202013092062429184.000000
 * max(double)/2 + 1 = 89884656743115785407263711865852178399035283762922498299458738401578630390014269380294779316383439085770229476757191232117160663444732091384233773351768758493024955288275641038122745045194664472037934254227566971152291618451611474082904279666061674137398913102072361584369088590459649940625202013092062429184.000000
 */
