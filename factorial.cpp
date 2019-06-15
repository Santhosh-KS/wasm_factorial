#include "factorial.h"

extern "C" int testfactorial(int n) {
  FactorialService factorialService;
  return factorialService.factorial(n);
}
