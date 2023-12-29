#include "email.hpp"
#include <iostream>
#include <string>

Email::Email(std::string sender_address,
  std::string recipient_address,
  std::string email_content)
  : sender(sender_address), recipient(recipient_address), content(email_content) {};

Email::~Email() {
  std::cout<< "Email instance deleted";
};

