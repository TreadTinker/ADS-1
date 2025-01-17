// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2)
    return false;
  for (uint64_t i = 2; i * i <= value; i++)
    if (value % i == 0)
      return false;
  return true;
}
 
uint64_t nPrime(uint64_t n) {
  uint64_t num = 2;
  for (uint64_t i = 1; i < n; i++)
    while (!checkPrime(++num)) {}
  return num;
}
 
uint64_t nextPrime(uint64_t value) {
  while (!checkPrime(++value)) {}
  return value;
}
 
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t num = 2; num < hbound;)
    checkPrime(num) ? sum += num++ : ++num;
  return sum;
}
