#include <stdio.h>
int main()
{
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    printf("%d\n", **(ptr2));

    return 0;
}