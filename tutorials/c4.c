#include <stdio.h>
int main()
{
    int age = 0;
    float pi = 3.14;
    char something = '^';
    printf("Age is %d \n", age); // In case of integers we use %d -> double
    printf("Value of pi is %f \n", pi); // In case of floats we use %f -> float
    printf("Something looks like %c\n", something); // In case of characters we use %c -> character

    return 0;
}