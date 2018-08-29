#include <iostream>

#include "Menu.hpp"
#include "File.hpp"
#include "Add.hpp"
#include "Remove.hpp"
#include "Edit.hpp"

int main() {
    
    int choice;
    bool exit = false;
    
    Menu menu;
    File filer;
    Add add;
    Remove remove;
    Edit edit;
    
    //Load in file
    filer.read_file();
    
    do{
        menu.show_menu();
        choice = menu.get_choice();
        switch (choice) {
            case 1:
                std::cout << "view contacts\n";
                filer.print_address_book();
                break;
            case 2:
                std::cout << "Add contact \n";
                add.add_contact(filer);
                break;
            case 3:
                std::cout << "Remove contact\n";
                remove.remove_contact(filer);
                break;
            case 4:
                std::cout << "Edit contacts\n";
                edit.edit_contact(filer);
                break;
            case 5:
                //Write back to file
                filer.write_to_file();
                exit = true;
                break;
            default:
                std::cerr << "Invalid input\n";
                break;
        }
        
    }while(!exit);
    
    return 0;
}
