#include <string>
#include <vector>

class Alias;

class Address {
  
  std::string name; 

  std::vector<Alias> aliases = {name};

  public:
    Address(std::string address_name);
    ~Address();
    void add_alias(Alias alias);
    void set_name(std::string new_name);
    std::string get_name();
};
