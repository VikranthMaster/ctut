//Write a program to print if the character is uppercase or lowercase
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch); //for string %s

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("ITS UPPER");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("ITS LOWER");
    }
}