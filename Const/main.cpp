#include <iostream>
int main(){

   const int MAX_AGE = 25;
   const int* const a = new int; 
   *a = 2;   
    a = (int*)&MAX_AGE;
   
   std::cout << *a << std::endl;

   delete a;        // free memory
   a = nullptr;    // avoid dangling pointer

   return 0;
}


// int* const a= new int;  
// Meaning --> a is a constant pointer to an int. 
// Can not change context. but can poit somewhere else.

// const int* a= new int;  int const* a= new int;  
// Meaning --> a is a pointer to a constant integer. 
// Can change context , but can not point somewhere else.

// const int* const a= new int;  
// Meaning -->a is a constant pointer to a constant integer.
// a cannot point anywhere else (the pointer itself is constant).
// *a (the value it points to) cannot be changed (the pointee is constant).
// Nothing changed.