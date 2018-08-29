#pragma once
#include <iostream>
#include <string>
#include <array>
#include <sstringstream>

class Menu{
  
public:
    void show_menu();
    int get_choice();
    
private:
    std::array<std::string, 7> menu_list = {
        "\n\nAddress Book",
        "------------",
        "1) View Contacts",
        "2) Add Contact",
        "3) Remove Contact",
        "4) Edit Contact",
        "5) Exit"
    };
    
};
