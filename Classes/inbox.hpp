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
};
