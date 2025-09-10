#include <iostream>
using namespace std;

int main()
{

    int a, b, result;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw runtime_error("Division by zero is not allowed!");      // std::exception
        if(a < 0  || b < 0)
            throw invalid_argument("Negative numbers are not allowed");

        result = a / b;
        cout << "Result = " << result << endl;
    }
    
    catch (const runtime_error &e)
    {
        cout << "Runtime Error: " << e.what() << endl;
    }
    catch(const invalid_argument& e){
        cout << "Invalid argument: " << e.what() << endl;
    }
    catch(const exception& e){ // catches any other std::exception
        cout << "Error: " << e.what() << endl;
    }
    catch(...){
        cout << "Unknown exception caught" << endl; 
    }

    cout << "-----Program continue after try-catch-----" << endl;
    
    for(int i = 0; i<5 ; i++){
        cout << " Number:" << i << endl;
    }
    return 0;
}