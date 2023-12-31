#include <string>
#include <vector>
#include "address.hpp"

class Email {

  Address sender;
  Address recipient;
  std::string content;
  bool read = false;
  bool flag = false;
  bool pin = false;

  public:
    Email(Address sender_address,
    Address recipient_address, 
    std::string email_content);
    ~Email();
    void mark_read();
    void mark_unread();
    void add_flag();
    void remove_flag();
    void add_pin();
    void remove_pin();

    Email quick_reply(std::string email_content);

};