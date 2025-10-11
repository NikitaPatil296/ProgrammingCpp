#include <iostream>
using namespace std;

int main(){
    int r, n;
    int operationNum;
    cout << "My Calculator" << endl;
    cout << "-------------" << endl;

    cout << "Enter first number" << endl;
    cin >> r ;
    cout << "Enter second number" << endl;
    cin >> n;
    
    cout << "Select operation:" << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cin >> operationNum;

    cout << "Your Result" << endl;

    switch(operationNum){
        case 1:
            cout << r << "+" << n << "=" << r + n << endl;
            break;
        case 2:
            cout << r << "-" << n << "=" << r - n << endl;
            break;
        case 3:
            cout << r << "*" << n << "=" << r * n << endl;
            break;
    }
}