#pragma once

#include <iostream>
#include <string>

#include "Person.hpp"
#include "File.hpp"

class Add{
    
public:
    
    void add_contact(File& address_book);
private:
    struct{
        std::string m_f_name, m_l_name, m_address, m_phone_num,
        m_email;
    }person;
    
};
