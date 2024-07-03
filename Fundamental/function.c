#include <stdio.h>
#include <string.h>

/* 
in C, Functions are blocks of code that run a specific task or set of instruction

They promote modularity by breaking down complex tasks into smaller and manageable pieces

Functions can be reused multiple times and accept input values called arguments or parameters 

A Function should be declared with return type (it can declared as a pointer or void)

*Note : in C, function should has unique name and the 'main()' function plays a crucial 
        role when executing program ( though this can depend on the compiler) 
*/

int main(){

    // This is where the task or set of instructions written
    char str[5] = {'G','O','L','D','\0'};

    // This is function called without parameter
    func_test1();

    // This is how function called with parameter
    func_test2(str);

    printf("hello world");

     /* 
       When a function completes its task, it should return a value of the same data type 
       as declared in the function signature. If the function is declared as void, 
       you can use 'return;' to terminate the function (since void functions do not return a value)
    */

    return 0;
}

// Function Prototypes are useful when dealing with many functions
void func_test1();
void func_test2(char* material);

// This is the void function
void func_test1(){
    printf("hello\n");
}

// This is the void function with a pointer char (string) as a parameter
void func_test2(char* material){
    printf("material : %s", material);
}
/*
    *Note : - Return statement is optional in void function
            - Functions can have more than 1 parameter
            - Every function comsumes memory
*/ 

// Function pointers are not covered in fundamental documentation because they require more knowledge about pointers





