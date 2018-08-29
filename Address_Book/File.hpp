#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Person.hpp"

class File{
    
public:

    void read_file();
    void write_to_file();
    void add_to_address_book(const Person& new_contact);
    void remove_from_address_book(const int& count);
    void edit_address_book(int count, std::string name);
    void print_address_book();
    
    
    
    std::vector<Person>* get_address_book(){
        return &address_book;
    }
    
private:
    const std::string filename = "/Users/blairjackson/Desktop/Git/Address_Book/test.txt";
    
    std::string m_f_name, m_l_name, m_address, m_phone_num,
    m_email;
    
    std::vector<Person> address_book;
    
};
