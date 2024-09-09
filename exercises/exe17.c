#include <stdio.h>

void Namaste()
{
    printf("Namaste\n");
}

void Bonjour()
{
    printf("Bonjour\n");
}

int main()
{
    char c;
    printf("Say your nationality. Indian(i) French(f): ");
    scanf("%c",&c);
    if (c == 'i'){
        Namaste();
    }
    else if (c == 'f')
    {
        Bonjour();
    }
    else {
        printf("Fuck u!");
    }
    

    return 0;
}