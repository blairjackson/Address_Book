#include "Remove.hpp"

void Remove::remove_contact(File& address_book){
    int count;
    std::cout << "What is the first name of the contact you want to delete? \n";
    std::cin >> f_name;
    
    std::vector<Person>* book_ptr = address_book.get_address_book();
    
    count = find_person(book_ptr, f_name);
    
    if(count != -1){
        address_book.remove_from_address_book(count);
    }
    
    
}

unsigned int Remove::find_person(std::vector<Person>* book_ptr, std::string f_name){
    
    std::cout << "name you want to delete is: " << f_name;
    
    int count = 0;
    for(auto person: *book_ptr){
        if(f_name == person.get_f_name()){
            std::cout << "\nfound ->" << person.get_f_name() << "\n";
            std::cout << "\nfound " << f_name << "\n";
            return count;
        }
        ++count;
        std::cout << "\n" << person.get_f_name() << "\n";
    }
    
    return -1;
}


