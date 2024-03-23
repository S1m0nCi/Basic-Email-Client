#include <iostream>
#include <string>
#include "email.hpp"
include "address.hpp"

Email::Email(Address sender_address,
  Address recipient_address,
  std::string email_content)
  : sender(sender_address), recipient(recipient_address), content(email_content) {};

Email::~Email() {
  std::cout<< "Email instance deleted";
};

void Email::set_subject(std::string subject_text) {
  Email::subject = subject_text;
}

void Email::set_cc(Address cc_address) {
  Email::cc = cc_address;
}

void Email::set_bcc(Address bcc_address) {
  Email::bcc = bcc_address;
}

Address Email::get_sender() {
  return Email::sender;
}

Address Email::get_recipient() {
  return Email::recipient;
}

void Email::set_read(bool is_read) {
  Email::read = is_read;
}

bool Email::get_read() {
  return Email::read;
}

void Email::set_flag(bool is_flagged) {
  Email::flag = is_flagged;
}

bool Email::get_flag() {
  return Email::flag;
}

void Email::set_pin(bool is_pinned) {
  Email::pin = is_pinned;
}

bool Email::get_pin() {
  return Email::pin;
}

Email Email::quick_reply ( std::string email_content ) {
  // return a new email instance which involves a reply to the email sent. 
  // the first two are the instance variables, the last is the variable passed to this method.
  return Email( Email::recipient, Email::sender, email_content );
}

Email Email::forward ( Address forward_address) {
  Email forward_email =  Email( Email::recipient, forward_address, Email::content);
  forward_email.original_sender = Email::sender;
  return forward_email;
}

void Email::recall() {
  Email::~Email();
}
