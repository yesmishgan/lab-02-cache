// Copyright 2020 Dolbnin Mikhail dolbnin@protonmail.com

#ifndef INCLUDE_CACHE_CHECK_HPP_
#define INCLUDE_CACHE_CHECK_HPP_

#include <set>
#include <sstream>
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

const int kylo = 1024;

class cache_check {
 public:
  cache_check();
  std::stringstream getExperiment(size_t num_exp) const;
  std::string getTravel() const;
  size_t getCountBuf() const;
  void countDirect();
  void countReverse();
  void countRandom();
  friend std::ostream & operator << (std::ostream & out, const cache_check & a);
 private:
  const std::vector<int> cache_size = {256 * kylo,
                                       1024 * kylo,
                                       6 * 1024 * kylo};
  int k;
  std::string travel_variant;
  std::vector<int> size_buf;
  std::vector<double> result_of_experiments;
};


#endif  // INCLUDE_CACHE_CHECK_HPP_
