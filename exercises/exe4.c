//Write a program to check if a number is divisible by 2 or not
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d \n", number % 2==0);

    // char star = '**'; // INvalid
    char star ='*';//Valid

    int isMonday = 0;
    int isRaining = 1;
    printf("%d \n", (isMonday || isRaining));

    printf("%d \n", (number>9 && number < 100));

    printf("%d \n", (number<10 && number >0));
}