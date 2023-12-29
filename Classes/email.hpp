#include <iostream>
#include <string>

class Email {

std::string sender;
std::string recipient;

private:

public:
  Email(std::string sender_address, std::string recipient_address);
  ~Email();
};

