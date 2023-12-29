#include "email.hpp"
#include <iostream>
#include <string>

Email::Email(std::string sender_address, std::string recipient_address)
  : sender(sender_address), recipient(recipient_address) {};

Email::~Email() {
  std::cout<< "Email instance deleted";
};

