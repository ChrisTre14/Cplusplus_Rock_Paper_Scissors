#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <iostream>
#include <string>
#include <fstream>

class FileManager {
private:

    std::ifstream myfile;
public:

    FileManager()=default;
    FileManager(FileManager const &fileManager)=default;
    FileManager(FileManager &&fileManager)=default;

    FileManager &operator=(FileManager const &fileManager)=default;
    FileManager &operator=(FileManager &&fileManager)=default;

    ~FileManager()=default;

    void read_file(std::string fileName);
    void read_file_types();

};


#endif
