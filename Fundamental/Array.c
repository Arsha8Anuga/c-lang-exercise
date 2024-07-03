#include <stdio.h>

int main(){

    /* In C, an array is usually defined as a collection of variable of 
    the same datatype that are stored in contignuous block of memory (I'll learn block of memory later) */

    // Adding '[]' after the variable name will turn the variable to an array

    // There are three ways of declaring an array

    /* 1. Declaring an array without initialization (the array size will be 
    reserved, but the values will be unpredictable) */ 
    int arr1[5];

    /* 2. Declaring an array with initialization but without specified size 
    (it'll automatically determine the size based on the number element provide in the initialization) */
    int arr2[] = {0,1,2,3,4};

    /* 3. Declaring an array with specified size and initialization 
    (the size will be reserved and the value will determined based on the initialization) 
    
    *Note: If the initialization number element greater than specified size, it'll generate an error */
    int arr3[5] = {0,1,2,3,4};

    /* Accessing or modifiying an array element should be done using '[]' 
    followed by the index; otherwise, it'll reference the array address */
    
    // Accessing a value by indexing
    printf(" %d \n", arr2[2]);

    // Accessing address of the array
    printf(" %p \n", (void *)arr3);

    // *Note : Index of an array will start from 0

    // if we want print or accessing all the array element, we should use a loop



    return 0;
}