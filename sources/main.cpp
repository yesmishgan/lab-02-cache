// Copyright 2020 Dolbnin Mikhail dolbnin@protonmail.com

#include <iostream>
#include "cache_check.hpp"

int main(){
  cache_check a("direction");
  cache_check b("reverse");
  cache_check c("random");
  std::cout << a;
  std::cout << b;
  std::cout << c;
  return 0;
}
