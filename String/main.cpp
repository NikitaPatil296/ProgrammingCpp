#include <iostream>

int main(){
    /* std::string str;
    std::string pNumber;
    int age;

    std::cout << "Enter your name: " << std::endl;
    std::getline(std::cin,str);                     // Read entire line including spaces...
    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;
    std::cout << "Enter your phone number: " << std::endl;
    std::cin >> pNumber;

    std::cout << std::endl;

    std::cout << "Your Name + Age: " << str + " " + std::to_string(age) << std::endl;
    std::cout << "Your Age + PhoneNumber: " << age + std::stoi(pNumber) << std::endl; */



    std::string str = "Rohan More";

    /* for(int i = 0; str[i]; i++){
        std::cout << str[i] << std::endl;
    } */

    /* for(int i = 0; str[i]!= '\0'; i++){
        std::cout << str[i] << std::endl;
    } */

    for (char ch :str)                               
    {
       std::cout << ch << std::endl;
    }
    
    

    return 0;
}