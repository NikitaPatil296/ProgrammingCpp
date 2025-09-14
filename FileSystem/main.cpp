#include <iostream>
#include <filesystem>
#include <fstream>

using namespace std;

int main()
{

    /*  std::filesystem::path filepath = "text.txt";
        cout << "Relative path of the text.txt file : " << filepath << endl;
        std::filesystem::path absPath = std::filesystem::absolute(filepath);
        cout << "Absolute path of the text.txt file : " << absPath << endl;


        std::filesystem::path from = "text.txt";
        std::filesystem::path to = "copiedText.txt";
        try{
            std::filesystem::copy_file(from, to);
        }catch(const std::filesystem::filesystem_error& e){
            cout << "Error: " << e.what() << endl;
        }

        cout << "Size of text.txt : " << std::filesystem::file_size("text.txt") << endl;

        std::remove("copiedText.txt");
        cout << "copiedText.txt file Removed!!!" << endl;

        std::rename("demo.txt","NewText.txt");
        cout << "Rename deom.txt to NewText.txt"<< endl;
    */

    // ------------------------------------------------------------------------------
    std::string filename = "file.txt";
    std::fstream fs;

    // Writing Mode---
    fs.open(filename,std::ios::out);
    if (fs.is_open())
    {
        cout << "File open to write"<< endl;
        fs << "Mein name ist Nikita und ich bin 29 jahr alt." << endl;
        fs.close();
        cout << "File written syccessfully" << endl;
    }else{
        cout << "Failed to open file" << endl;
    }

    // Reading Mode---
    fs.open(filename,std::ios::in);
    if(fs.is_open()){
        cout << "File open to read" << endl;
        std::string line;
        while(getline(fs,line)){
            cout << line << endl;
        }
        fs.close();
        cout << "File Read syccessfully" << endl;
    }else{
        cout<< "Failed to read file" << endl;
    }
    return 0;
}
