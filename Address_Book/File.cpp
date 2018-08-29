
#include "File.hpp"


void File::read_file(){
    std::ifstream file(filename);
    
    if(!file){
        std::cerr << "Error opening file\n";
        return;
    }
    
    while(file >> m_f_name >> m_l_name >> m_address
          >> m_phone_num >> m_email){
        
        Person new_person(m_f_name, m_l_name, m_address,
                          m_phone_num, m_email);
        
        address_book.push_back(new_person);
        
        std::cout  << m_f_name << " " << m_l_name << " " << m_address
        << " " << m_phone_num << " " << m_email << "\n";
    }
    
    file.close();
    
}

void File::print_address_book(){
    std::cout << "\n\n\n------- Contacts -------- \n";
    for(auto contact: address_book){
        std::string f_name, l_name, address, phone_num, email;
        
        f_name = contact.get_f_name();
        l_name = contact.get_l_name();
        address = contact.get_address();
        phone_num = contact.get_phone_num();
        email = contact.get_email();
        
        std::cout << "\n\nFirst Name: " << f_name << "\n";
        std::cout << "Last Name: " << l_name << "\n";
        std::cout << "Address: " << address << "\n";
        std::cout << "Phone No: " << phone_num<< "\n";
        std::cout << "Email: " << email << "\n";
        
    }
}

void File::add_to_address_book(const Person& new_contact){
    address_book.push_back(new_contact);
}

void File::remove_from_address_book(const int &count){
    address_book.erase(address_book.begin() + count);
    std::cout << address_book[0].get_f_name() << " Removed from Contacts\n";
}

void File::edit_address_book(int count,std::string f_name){
    address_book[count].set_f_name(f_name);
}


void File::write_to_file(){
    std::ofstream file(filename);

    for(auto contact : address_book){
        std::string f_name, l_name, address, phone_num, email;
        
        f_name = contact.get_f_name();
        l_name = contact.get_l_name();
        address = contact.get_address();
        phone_num = contact.get_phone_num();
        email = contact.get_email();
        
        file << f_name << " " << l_name << " " << address << " "
        << phone_num << " " << email << "\n";
    }
    
    file.close();
}






