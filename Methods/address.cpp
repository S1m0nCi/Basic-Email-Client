#include "address.hpp"

Address::Address(std::string address_name)
  : name(address_name) {}

Address::~Address() {
  std::cout << "email address deleted";
}
