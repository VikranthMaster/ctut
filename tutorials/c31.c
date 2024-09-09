#include <stdio.h>
// call by reference

void _sqaure(int *n)
{
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}

void square(int n)
{
    n = n*n;
    printf("Square of the number is: %d\n", n);

}

//changed at address only

int main()
{
    int num = 5;
    int *ptr = &num;
    _sqaure(ptr);
    printf("num = %d\n", num); // original value remains unchanged
    _sqaure(num);
    return 0;
}