int main(int argc, char* argv[]) {
  {
    int i = 1;
    int j(2);
    int k{3};
    int t = {3};
  }

  {
    int i = 1.1;      // Warning will be caused
    int j(2.2);       // Warning will be caused too
    // int k{3.3};    // Error will be caused
    // int t = {3.3}; // Error will be caused
  }

  {
    auto i = 1;
    auto j = 2.2;
    auto ii = i;
    decltype(j) jj = j; //"Clone" type
  }

  //Swap 1
  {
    int a = 1, b = 2;

    decltype(a) tmp = a;
    a = b;
    b = tmp;
  }

  //Swap 2
  {
    int a = 1, b = 2;

    auto tmp = a;
    a = b;
    b = tmp;
  }

  return 0;
}

