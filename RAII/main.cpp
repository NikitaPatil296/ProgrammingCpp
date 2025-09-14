#include <iostream>
#include <string>
#include "RAII_File.h"

int main(){

    try{
        RAII_File file("example.txt",std::ios::out);
        //file.get() << "Hello,RAII in  C++ !" << std::endl;   // Write to file
        // No need to manually close the file , destructor will handle it.
    }catch(const std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}