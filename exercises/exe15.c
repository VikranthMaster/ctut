// Print the factorial of a number n
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int fact = 1; // Initialize factorial variable to 1
    for (int i = 1; i <=x; i++)
    {
        fact = fact * i;
    }
    printf("%d \n", fact);
    return 0;
}