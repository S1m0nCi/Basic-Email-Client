#include <string>
#include <vector>
#include "address.hpp"

// We may need separate sender and recipient email classes: each will do different things with the email.
// For instance, 'read', 'pin', and 'flag' would all be actions that only the recipient would do. OR we could create copes of the same email. 
// We can just allow each to do different things within the class.
// Another class to implement could be an outbox.
// Best solution:
// Two classes inherit from this one

class Email {
  
  // class members are private by default

  Address sender;
  Address recipient;
  std::string content;

  public:
    Email(Address sender_address,
    Address recipient_address, 
    std::string email_content);
    ~Email();

    std::string subject;
    Address cc;
    Address bcc;
    Address original_sender;

    bool read = false;
    bool flag = false;
    bool pin = false;

    void set_subject(std::string email_subject);
    void set_cc(Address cc_address);
    void set_bcc(Address bcc_address);
    void set_read(bool is_read);
    bool get_read();
    void set_flag(bool is_flagged);
    bool get_flag();
    void set_pin(bool is_pinned);
    bool get_pin();
    Address get_sender();
    Address get_recipient();

    Email quick_reply(std::string email_content); // a recipient function
    Email forward(Address forward_address);
    void recall();

};