//Pointers
// A variable that stores the memory address of another variable
//how much memory do we have ? how are they allocated?

#include <stdio.h>
int main()
{
    int age = 22; //value at address of variable
    int *ptr = &age; 
    int _age = *ptr; //gives the value of age ie 22

    printf("%d\n", _age);


    printf("%p\n", &age);
    printf("%u \n", age);

    printf("%u\n", ptr);
    printf("%u\n", &ptr); //& gives the address of the value and just specificying the variable name gives it value


    return 0;
}

// Declaring Pointers 
/*
int *ptr for intergers
float *ptr for floats
char *ptr for strings
*/

//Format Specifier
// printf("%p",&age);
// printf("%p", ptr);
// printf("%p",&ptr);
// printf("%u", ptr);
