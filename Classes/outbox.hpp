#include <vector>
#include "email.hpp"

class Outbox {
  
  std::vector<Email> emails;

  private:
    /* data */
  public:
    Outbox(std::vector<Email> emails);
    ~Outbox();
    
    void add_email(Email email);
    void remove_email();
    int get_size();
};

