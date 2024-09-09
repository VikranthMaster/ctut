#include <stdio.h>
int main()
{
    int x;
    do{
        printf("Enter a number: ");
        scanf("%d", &x);
        if (x%7 == 0){
            break;
        }
    }
    while(1);
    return 0;
}