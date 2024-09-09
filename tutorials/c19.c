#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    // int x =0;
    // while(x <= i){
    //     printf("%d \n",x);
    //     x++;
    // }

    for (int x = 0; x <= i; x++)
    {
        printf("%d \n",x);
    }
}