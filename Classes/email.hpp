#include <string>

class Email {

  std::string sender;
  std::string recipient;
  std::string content;

  public:
    Email(std::string sender_address,
    std::string recipient_address, 
    std::string email_content);
    ~Email();
};

