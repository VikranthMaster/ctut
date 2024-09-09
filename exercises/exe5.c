// Write a program to print the average of 3 numbers.
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a number: ");
    scanf("%d",&y);
    printf("Enter a number: ");
    scanf("%d",&z);

    printf("%d \n", (x+y+z)/3);
}