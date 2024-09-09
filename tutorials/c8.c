#include <stdio.h>
#include <math.h>
int main()
{
    int c = 3;
    int a=1,b=2;
    int sum = a+b;
    int mult = a*b;
    int x,y = a*b; //this will assign value to only y not x 

    a = b + c; //Valid
    // b+c = a; //Invalid
    int power = pow(b,c);
    printf("%d", power);

    //modulus operator doesnt operatre on floats
}