#include <stdio.h>
int main()
{   
    int x;
    do{
        printf("Enter an number: ");
        scanf("%d", &x);
    }
    while(x%2==0);
    return 0;
}