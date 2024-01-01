#include <string>
#include <vector>
#include "address.hpp"
#include "email.hpp"

class Inbox {
  
  Address owner;
  std::vector<Email> emails = {};
  // Separate into read and unread.
  
  public:
    Inbox(Address owner, std::vector<Email> emails);
    ~Inbox();

    void add_email(Email email);
    void remove_email();
  
    int get_size();
    std::vector<Email> get_unread();
    std::vector<Email> get_read();
    std::vector<Email> get_pinned();
    std::vector<Email> get_flagged();
    std::vector<Email> get_emails_from(Address address);
};
