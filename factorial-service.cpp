#include "factorial.h"

int FactorialService::factorial(int n)
{
  if (n == 0 || n == 1) {
    return 1; 
  }
  else {
    return n * this -> factorial(n-1);
  }
}
