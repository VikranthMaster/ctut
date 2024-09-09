// Print the sum of first n natural numbers
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int sum = 0;
    for(int i=0; i<=x; i++)
    {
        sum = sum + i;
    }
    printf("%d \n",sum);
}