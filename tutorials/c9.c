// Type Conversion
/*
int op int -> int
int op float -> float
float op float -> float
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("%f \n",3/2);
    printf("%d \n", 2/3);

    int a =(int)1.999999; // decimals uda do
    printf("%d \n", a);

    int x = 4 + 9 * 10;
    printf("%d \n", x);

    //Associvity comes when operator of same precendence occurs like the example below
    // It goes from left to right
    int y = 4*3/6*2; //First 4*3->12, 12/6 -> 2*2 ie ((4*3)/6)*2)
    printf("%d \n", y);
}

// Operator Precdence liek BODMAS
/*
1. *,/,% 
2. +,-
3. =
*/


