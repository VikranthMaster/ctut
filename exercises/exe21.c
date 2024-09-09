#include <stdio.h>

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    int factN = fact(n-1);
    return factN*(n);
}
int main()
{
    printf("%d\n", fact(4));
    return 0;
}