// Copyright 2020 Dolbnin Mikhail dolbnin@protonmail.com

#ifndef INCLUDE_CACHE_CHECK_HPP_
#define INCLUDE_CACHE_CHECK_HPP_

#include <set>
#include <sstream>
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

const int KYLO = 1024;

const int L2 = 1024 * KYLO;

class cache_check {
 public:
  explicit cache_check(std::string travel_variant);
  std::stringstream getExperiment(size_t num_exp);
  std::string getTravel() const;
  int getCountBuf() const;
  friend std::ostream & operator << (std::ostream & out, cache_check & a);
 private:
  std::string travel_variant;
  std::vector<int> size_buf;
  std::vector<double> result_of_experiments;
  const int L1 = 256 * KYLO;
  const int L3 = 6 * 1024 * KYLO;
};


#endif  // INCLUDE_CACHE_CHECK_HPP_
