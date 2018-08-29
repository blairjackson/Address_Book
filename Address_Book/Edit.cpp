
#include "Edit.hpp"


void Edit::edit_contact(File& address_book){
    int count;
    
    std::cout << "Who's info would you like to edit? ";
    std::cin >> name_to_change;
    
    std::cout << "What would you like to change it to?";
    std::cin >> changed_name;
    
    std::vector<Person>* book_ptr = address_book.get_address_book();
    count = find_person(book_ptr, name_to_change);
    
    if(count != -1){
        address_book.edit_address_book(count, changed_name);
    }
    
}



unsigned int Edit::find_person(std::vector<Person>* book_ptr, std::string f_name){
    
    std::cout << "name you want to change is: " << f_name;
    
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




