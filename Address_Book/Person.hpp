#pragma once

#include <iostream>
#include <string>


class Person{
    
public:
    Person(std::string f_name,std::string l_name,
           std::string address,std::string phone_num,
           std::string email)
    
    : person{.m_f_name = f_name, .m_l_name = l_name,
        .m_address = address, .m_phone_num = phone_num, .m_email = email}{
            std::cout << "Person constructor called\n";
        };
    
            ~Person(){
                std::cout << "Person destructor called\n";
            };
    
    
            std::string get_f_name() const{
                return person.m_f_name;
            }
            
            void set_f_name(std::string f_name){
                person.m_f_name = f_name;
            }
            
            std::string get_l_name() const{
                return person.m_l_name;
            }
            
            std::string get_address() const{
                return person.m_address;
            }
            
            std::string get_phone_num() const{
                return person.m_phone_num;
            }
            
            std::string get_email() const{
                return person.m_email;
            }
private:
    struct{
        std::string m_f_name, m_l_name, m_address, m_phone_num,
        m_email;
    }person;
    
};
