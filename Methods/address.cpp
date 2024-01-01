#include "address.hpp"
#include <iostream>
#include "alias.hpp"

Address::Address(std::string address_name)
  : name(address_name) {};

Address::~Address() {
  std::cout << "email address deleted";
};

void Address::add_alias(Alias alias) {
  aliases.push_back(alias);
};
