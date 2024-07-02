#include <stdio.h>


// These are prototype function (i'll learn later about this)
void if_statement(int number);
void if_else_statement(int number);
void nested_if_statement(int number);
void while_loop(int number);
void do_while_loop(int number);
void for_loop(int number);
void switch_statement(int number);
void break_statement(int number);
void continue_statement(int number);
void goto_statement(int number);

int main() {
    int number = 5;

    printf("Example of Control Structures in C:\n\n");

    if_statement(number);

    if_else_statement(number);

    nested_if_statement(number);

    while_loop(number);

    do_while_loop(number);

    for_loop(number);

    switch_statement(number);

    break_statement(number);

    continue_statement(number);

    goto_statement(number);

    return 0;
}

// Example functions implementing each control structure

// Executes a block of code if a specified condition is true
void if_statement(int number) {
    printf("\n1. if statement:\n");
    if (number > 0) {
        printf("%d is greater than 0.\n", number);
    }
}

// Executes one block of code if a specified condition is true and another block if it's false
void if_else_statement(int number) {
    printf("\n2. if-else statement:\n");
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
}

// Allows for multiple branching decisions based on multiple conditions
void nested_if_statement(int number) {
    printf("\n3. nested if statement:\n");
    if (number > 0) {
        if (number % 2 == 0) {
            printf("%d is a positive even number.\n", number);
        } else {
            printf("%d is a positive odd number.\n", number);
        }
    }
}

// Executes a block of code as long as a specified condition is true
void while_loop(int number) {
    printf("\n4. while loop:\n");
    while (number > 0) {
        printf("%d ", number);
        number--;
    }
    printf("\n");
}

/* Executes a block of code once before checking if the condition is true, 
then repeats the loop as long as the condition is true */
void do_while_loop(int number) {
    printf("\n5. do-while loop:\n");
    do {
        printf("%d ", number);
        number--;
    } while (number > 0);
    printf("\n");
}

// Executes a block of code a specified number of times
void for_loop(int number) {
    printf("\n6. for loop:\n");
    for (int i = 1; i <= number; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Evaluates an expression against a list of case values and executes the corresponding block of code
void switch_statement(int number) {
    printf("\n7. switch statement:\n");
    switch (number) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Number is greater than 3\n");
    }
}

/* Terminates the innermost loop or switch statement and transfers control 
to the next statement after the loop or switch */
void break_statement(int number) {
    printf("\n8. break statement:\n");
    for (int i = 1; i <= number; i++) {
        if (i == 3) {
            break; // exit the loop when i reaches 3
        }
        printf("%d ", i);
    }
    printf("\n");
}

// Skips the remaining code inside a loop for the current iteration and proceeds to the next iteration
void continue_statement(int number) {
    printf("\n9. continue statement:\n");
    for (int i = 1; i <= number; i++) {
        if (i == 3) {
            continue; // skip printing 3 and move to the next iteration
        }
        printf("%d ", i);
    }
    printf("\n");
}

// Transfers control to the labeled statement within the same function
void goto_statement(int number) {
    printf("\n10. goto statement:\n");
    int i = 1;
loop:
    if (i <= number) {
        printf("%d ", i);
        i++;
        goto loop; // jump back to the 'loop' label
    }
    printf("\n");
}


