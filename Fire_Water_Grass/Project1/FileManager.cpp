#include "FileManager.h"

void FileManager::read_file(std::string fileName){

    myfile.open(fileName);
    std::string line;

    if ( myfile.is_open() ){
        while(myfile){

            std::getline (myfile, line);
            std::cout << line << std::endl;
        }

        myfile.close();
    }
}

void FileManager::read_file_types(){
    
    read_file("types.txt");
}