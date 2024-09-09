// Write a program to check if a student passed or failed
#include <stdio.h>
int main()
{
    int marks;
    printf("enter students marks: ");
    scanf("%d", &marks);

    marks > 30 ? printf("Pass") : printf("Fail");
    
}