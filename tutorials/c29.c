#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int **pptr = &ptr;
    printf("Value of age: %d\n", &ptr);
    printf("Value of age through pointer: %d\n", &age);
    printf("Value of pptr: %d\n", pptr);



    return 0;
}
