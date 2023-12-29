#include <iostream>
#include <string>
#include "alias.hpp"

Alias::Alias(std::string alias_name)
  : name(alias_name) {}

Alias::~Alias() {
  std::cout << "Alias deleted";
};