#include <stdio.h>
#include <math.h>

void sq(int x)
{
    int squ = pow(x,2);
    printf("%d \n", squ);
}
int main()
{
    int x;
    printf("Enter the number u wanna square: ");
    scanf("%d", &x);
    sq(x);
    return 0;
}