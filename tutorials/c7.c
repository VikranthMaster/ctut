#include <stdio.h>
int main()
{
    //Valid 
    int a = 22;
    int b = a;
    int c = b+1;
    int d = 1,e;

    int a,b,c;
    a=b=c=1;

    //InValid
    int oldAge = 22;
    int newAge = oldAge + years; //years should be on top line
    int years = 2;
    int x=y=z=4; //this happens because when assigning x to y, y is not defined  use and declare cant be used at the same time

    return 0;
}