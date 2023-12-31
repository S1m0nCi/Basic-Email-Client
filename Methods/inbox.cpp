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