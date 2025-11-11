#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int a = 5;  
    std::vector<int> v{2,3,4,5,6};
    std::for_each(v.begin(), v.end(), [&a](int x){
        if(x % 2 == 0)
            std::cout<< x << " is even" << std::endl;
        else
            std::cout << x << " is odd " << std::endl; 

        a=3;
        std::cout << "Value of a = " << a << std::endl;
    });

    /*
    auto add = [&]() {  
        return ++a;
    };
    std::cout << add() << std::endl;
    std::cout << a << std::endl;
    */
    return 0;
}