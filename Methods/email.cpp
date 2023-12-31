#include "email.hpp"
#include <iostream>
#include <string>

Email::Email(Address sender_address,
  Address recipient_address,
  std::string email_content)
  : sender(sender_address), recipient(recipient_address), content(email_content) {};

Email::~Email() {
  std::cout<< "Email instance deleted";
};

void Email::mark_read() {
  Email::read = true;
}

void Email::mark_unread() {
  Email::read = false;
}

void Email::add_flag() {
  Email::flag = true;
}

void Email::remove_flag() {
  Email::flag = false;
}

void Email::add_pin() {
  Email::pin = true;
}

void Email::remove_pin() {
  Email::pin = false;
}

Email Email::quick_reply ( std::string email_content ) {
  // return a new email instance which involves a reply to the email sent. 
  // the first two are the instance variables, the last is the variable passed to this method.
  return Email( Email::recipient, Email::sender, email_content );
}

