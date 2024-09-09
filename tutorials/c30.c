#include <stdio.h>


// call by value: we pass value of variable as argument
void square(int n)
{
    n = n*n;
    printf("Square of the number is: %d\n", n);

}

int main()
{
    int num = 4; // this makes a copy of the number
    square(num);
    printf("number is %d\n", num);

    return 0;
}