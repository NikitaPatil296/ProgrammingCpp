#include <iostream>
#include "RAII_File.h"

//Acquire resource in construtor
RAII_File::RAII_File(const std::string& filename, std::ios::openmode mode){
    file.open(filename,mode);
    if(!file.is_open()){
        throw std::runtime_error("Failed to open file");
    }else{
        std::cout << "File opened: " << filename << std::endl;
        file << " HELLO" << std::endl;  // Write to file
    }
}

// Provide access to file
std::fstream& RAII_File::get(){
    return file;
}

// Release resource in desctrutor 
RAII_File::~RAII_File(){
    if(file.is_open()){
        file.close();
        std::cout << "Filed closed automatically";
    }
}