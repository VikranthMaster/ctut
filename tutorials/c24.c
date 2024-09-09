//taking sum of two numbers
#include <stdio.h>

int sum(int a, int b)
{
    return a+b;
}

void printTable(int n)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d \n",i*n);
    }
}

int main()
{
    int a,b;
    int n = 20;
    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    printf("Sum of %d and %d is: %d\n", a, b, sum(a, b)); // calling the function sum with arguments a and b and printing the result.
    printTable(10);
    return 0;
}