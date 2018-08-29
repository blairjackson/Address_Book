#pragma once

#include <iostream>
#include <string>
#include <array>

#include "File.hpp"

class Edit{
    
public:
    
    void edit_contact(File& address_book);
    unsigned int find_person(std::vector<Person>* book_ptr, std::string f_name);
    
private:
    
    std::string name_to_change, changed_name;

};
