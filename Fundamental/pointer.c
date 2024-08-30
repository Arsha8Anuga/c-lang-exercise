#include <stdio.h>

/*
In C or C++, there is a type of variable called a pointer. A pointer is a variable that stores 
the memory address of another variable. It allows direct manipulation of the value of a variable.
Moreover, pointers are versatile; by using them, you can create dynamic programs and 
effectively modify variables.
*/

/*
To declaring pointer, place an aesterisk "*" after the data type of the variable.
*/

int* ptr; // this is how declaring the varible.

int val = 0;

// to providing an address information from a variable, place ampersand "&" before the variable name.
//*Note = using ampersand to gain address information should be done after declaring variable.

ptr = &val;

// It's important to note that the pointer's data type should match the type of the variable it references.
// However, in some cases, a void* pointer is useful when dealing with a variable of unknown or generic type.
//* Note: Be careful when dealing with void* pointers, as they can sometimes lead to unexpected behavior.



int main(){ 

    //when accessing or obtain the value from the reference, use "*" to dereference it.

    return 0;
}