#include "inbox.hpp"
#include "address.hpp"
#include <string>
#include <vector>
#include <iostream>

Inbox::Inbox (Address inbox_owner, std::vector<Email> email_list) 
  : owner(inbox_owner), emails(email_list) {}

Inbox::~Inbox () {
  std::cout<<'User Inbox deleted';
}

void Inbox::add_email (Email email) {
  Inbox::emails.push_back(email);
}

void Inbox::remove_email () {
  Inbox::emails.pop_back();
}

int Inbox::get_size() {
  return emails.size();
}