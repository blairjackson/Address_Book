#pragma once

#include <iostream>

#include "File.hpp"
#include "Person.hpp"

class Remove{
  
public:
    
    //void set_address_book(File& contact_book);
    
    void remove_contact(File& address_book);
    
    unsigned int find_person(std::vector<Person>* book_ptr, std::string f_name);
    
private:
    std::string f_name;
    
};
