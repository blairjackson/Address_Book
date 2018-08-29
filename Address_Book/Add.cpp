
#include "Add.hpp"



void Add::add_contact(File& address_book){
   
    
    std::cout << "First name: ";
    std::cin >> person.m_f_name;
    
    std::cout << "Last name: ";
    std::cin >> person.m_l_name;
    
    std::cout << "Address: ";
    std::cin >> person.m_address;
    
    std::cout << "Phone No: ";
    std::cin >> person.m_phone_num;
    
    std::cout << "Email: ";
    std::cin >> person.m_email;
    
    Person new_contact(person.m_f_name, person.m_l_name,
                       person.m_address, person.m_phone_num, person.m_email);
    
    address_book.add_to_address_book(new_contact);
}
