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

std::vector<Email> Inbox::get_unread() {
  std::vector<Email> unread;
  for (int i = 0; i < Inbox::get_size(); i++) {
    if (!(Inbox::emails[i].read)) {
      unread.push_back(Inbox::emails[i]);
    };
  };
  return unread;
}

std::vector<Email> Inbox::get_read() {
  std::vector<Email> read;
  for (int i = 0; i < Inbox::get_size(); i++) {
    if (Inbox::emails[i].read) {
      read.push_back(Inbox::emails[i]);
    };
  };
  return read;
}

std::vector<Email> Inbox::get_flagged() {
  std::vector<Email> flagged;
  for (int i = 0; i < Inbox::get_size(); i++ ) {
    if (Inbox::emails[i].flag) {
      flagged.push_back(Inbox::emails[i]);
    };
  };
  return flagged;
}

std::vector<Email> Inbox::get_pinned() {
  std::vector<Email> pinned;
  for (int i = 0; i < Inbox::get_size(); i++) {
    if (Inbox::emails[i].pin) {
      pinned.push_back(Inbox::emails[i]);
    };
  };
  return pinned;
}

std::vector<Email> Inbox::get_emails_from(Address address) {
  std::vector<Email> emails_from;
  for (int i = 0; i < Inbox::get_size(); i++) {
    if (Inbox::emails[i].get_sender() == address)
  }
}
