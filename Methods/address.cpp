#include "address.hpp"
#include <iostream>
#include "alias.hpp"

Address::Address(std::string address_name)
  : name(address_name) {};

Address::~Address() {
  std::cout << "email address deleted";
};

std::string get_name() {
  return Address::name;
}

void set_name(std::string new_name) {
  Address::name = new_name;
}

void Address::add_alias(Alias alias) {
  aliases.push_back(alias);
};
