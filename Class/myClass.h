#include <string>

class myClass
{
private:
    std::string name;
    int age;

public:
    myClass(const std::string name, int age);
    ~myClass();
    void displayData();
};