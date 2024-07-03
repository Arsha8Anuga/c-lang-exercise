#include <stdio.h>

/*
Variable Scope

File Scope (Global Scope)
*/
char f_scope;

//Function Scope
int main() { 

    char func_scope;

    //Block Scope
    if (func_scope != NULL){
        char blk_scope;
    }
    return 0;
}