#include "Menu.hpp"


void Menu::show_menu(){
    
    for(auto i : menu_list){
        std::cout << i << "\n";
    }
}

int Menu::get_choice(){
    int choice;
    
    std::cout << "Choose a number: ";
    std::cin >> choice;
    
    return choice;
}
