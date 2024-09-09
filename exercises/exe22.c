#include <stdio.h>
int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0; // the memory address of ptr points to x so adding a * gave the value 0 to x

    printf("x = %d\n", x);
    printf("ptr = %p\n", *ptr); // ptr holds the memory address of x

    *ptr+=5;
    printf("x = %d\n", x);
    printf("ptr = %p\n", *ptr); // ptr still holds the memory address of x, not the new value

    (*ptr)++;
    printf("x = %d\n", x);
    printf("ptr = %p\n", *ptr); // ptr still holds the memory address of x, not the new value

    // *ptr is ntg but "x"

    int y;
    int *ptr1;
    ptr1 = y; // you cant store the value of pointer witohout the *
    ptr1 = &y;
    printf("%d\n", ptr1);
    printf("%d\n", y); // ptr1 holds the value of y, not the memory address of y

    return 0;

}