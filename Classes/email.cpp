#include "email.hpp"
#include <string>

Email::Email(std::string sender_address, std::string recipient_address)
  : sender(sender_address), recipient(recipient_address) {}
