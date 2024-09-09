#include <stdio.h>
int main()
{
    int x = 5*2-2*3; // --> 4 --> (5*2)-(2*3) 
    int y = 5*2/2*3; // --> 15(Associate)(left to right) --> ((5*2)/2)*3)
    int z = 5*(2/2)*3; // ---> 15---> (5*((2/2)*3)) bracket phele open karo
    int a = 5+2/2*3; // --> 8 --> (5+((2/2)*3))

    printf("%d, %d, %d, %d",x,y,z,a);
}