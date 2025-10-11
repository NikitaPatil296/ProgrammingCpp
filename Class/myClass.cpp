#include<iostream>
#include "myClass.h"

myClass::myClass(const std::string name, int age):name(name), age(age){}

myClass::~myClass(){}

void myClass::displayData(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}