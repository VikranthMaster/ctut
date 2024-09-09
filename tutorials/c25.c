// Argument vs Parameter
/* values that                  values in function declaration & defination 
   are passed to a function     used to receive value
   (i.e., the actual data)      formal parameters
   are called parameters.

   used to send
   values

   actual parameter
*/

// functon can only retunr one value at a time
// changes to parameters in functions dont chnage the values in calling function

#include <stdio.h>

void calcPrice(float value)
{
    value  = value + (0.18*value);
    printf("%f", value);
}
int main()
{
    float value = 100;
    calcPrice(value); // passing value of variable to function
    printf("%d", value);
    return 0;
}