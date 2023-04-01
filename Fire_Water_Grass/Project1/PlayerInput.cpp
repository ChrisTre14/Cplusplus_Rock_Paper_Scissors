#include "PlayerInput.h"


std::string PlayerInput::get_input(){
    
    std::string input;
    std::cout << "Input a type from the following list:" << std::endl;
    fileManager.read_file_types();
    std::cin >> input;
    return input;
}