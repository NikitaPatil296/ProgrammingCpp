#include <iostream>


// template<typename T>
// void print(T value){    
//     std::cout << value << std::endl;
// }

template <typename T, int N>
class Array
{
public:
    T m_array[N];

public:

    void getSize()
    {
        std::cout << "Array Size : " << N << std::endl;
    }

    void displayArrayValue()
    {
        std::cout << "Array values : ";
        for (int i = 0; i < N; i++)
        {
            std::cout << m_array[i] << ", ";
        }
    }
};

int main(){
    // print(5);
    // print("Hello");
    // print(5.5f);
    int value;
    Array <int, 5>array;
    for(int i = 0 ; i < 5; i++){
        std::cin >> value;
        array.m_array[i] = value;
    }
    array.getSize();
    array.displayArrayValue();

    std::string str;
    Array <std::string, 5>arr;
    for(int i = 0 ; i < 5; i++){
        std::cin >> str;
        arr.m_array[i] = str;
    }
    arr.getSize();
    arr.displayArrayValue();

    return 0;
}

