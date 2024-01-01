#include "outbox.hpp"
#include <vector>
#include <iostream>

Outbox::Outbox(std::vector<Email> email_list)
  : emails(email_list) {}

Outbox::~Outbox () {
  std::cout<<"Outbox instance deleted";
}

void Outbox::add_email (Email email) {
  Outbox::emails.push_back(email);
}

void Outbox::remove_email () {
  Outbox::emails.pop_back();
}

int Outbox::get_size() {
  return emails.size();
}