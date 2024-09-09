//sum of first n natural numbers using recursion
#include <stdio.h>

int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    int sumNm1 = sum(n-1); // sum of 1 to n
    int sumN = sumNm1+n;
    return sumN;
}

int main()
{
    printf("sum is: %d\n",sum(5));
    return 0;
}