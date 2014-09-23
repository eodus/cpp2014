#include <cstdio>
#include <new>

// typedef demo
// typedef int *pint;
// OR (moern way)
using pint = *int;

// typedef pint apint[];
// OR
// typedef int *apint[];
// OR (modern way)
using apint = *int[];


int main() {
  // const and cast
  {
    const int *cpi = new int[10];

    int *pi = (int*)cpi;

    //cpi[0] = 10; //Error;
    pi[0] = 10;
    printf("%d\n", cpi[0]);
    delete[] cpi;
  }

  // "Jagged" array
  {
    apint a = {new int[10], new int[11]};

    a[0][0]; // till
    a[0][9];

    a[1][0]; // till
    a[1][10];

    // Kill'em all
    // for (int i = 0; i < 2; ++i)
    //   delete[] a[i];

    // OR (modern way)

    // Kill'em all
    for (auto p : a) delete[] a;
  }

  // Null pointer
  {
    int *p1 = nullptr; // modern way
    int *p2 = 0;       // oldschool way
    int *p3 = NULL;    // decorated oldschool way (NULL defined just like #define NULL 0)

    if (!p1) {
      // "If p1 is not correct..."
      printf("p1 is not correct\n");
    }

    // Also one can use (p1 == nullptr)
  }

  // Reference pointer
  {
    int i = 10, j = 12;
    int &li = i;
    const int &lj = j;

    ++li;
    // --lj; // Error, attemption to change constant
    printf("%d %d %d %d", i, j, li, lj);
  }

  // Anti-example (UB) with pointers
  {
    int *pi;
    {
      int i = 42;
      pi = &i;
    }

    int &li = *pi; // Refer to what? UB!

    ++li;
    printf("%d\n", li);  // UB. Maybe 43, but may be not...
    // printf("%d\n", i); // Just error, "i" not in scope
  }

  return 0;
}
