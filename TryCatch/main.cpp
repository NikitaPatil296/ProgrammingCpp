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
    catch (const runtime_error &e){
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


/* NOTE */

// Try–Catch in C++ (Micro Notes)

// try { } → block for risky code.

// Must be followed by at least one catch.

// throw <exception> → used to raise an error.

// Exceptions can be standard (runtime_error, invalid_argument, etc.) or custom.

// catch (const exceptionType &e) → handles a specific exception.

// catch (...) → handles any exception (last resort).

// Once an exception is thrown → control jumps to the first matching catch.

// Code after throw inside try is skipped.

// After catch finishes, program continues normally.

// Catch exceptions by const reference (avoids slicing & extra copies).

// Order matters → place specific catches first, then generic.

// Use exceptions for error handling, not for normal program flow.

// Keep try blocks as small as possible.

// RAII ensures resources are cleaned up even if an exception occurs.