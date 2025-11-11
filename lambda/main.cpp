#include <iostream>

int main(){

    int a = 5;

    auto add = [&]() {
        return ++a;
    };

    std::cout << add() << std::endl;
    std::cout << a << std::endl;
    return 0;
}