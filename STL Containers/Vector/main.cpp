#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);

    for(auto var : numbers)
        std::cout << var << std::endl;
}