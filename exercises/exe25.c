//Write a program  to enter price of 3 items & pritn their final cost with gst
#include <stdio.h>
int main()
{
    float items[3];
    float total[3];
    float gst = 0.18;

    printf("Enter the first item: ");
    scanf("%f\n", &items[0]);
    

    printf("Enter the second item: ");
    scanf("%f\n", &items[1]);
    

    printf("Enter the third item: ");
    scanf("%f\n",&items[2]);
    
    total[0] = items[0] + gst;
    total[1] = items[1] + gst;
    total[2] = items[2] + gst;

    float total_cost = total[0] + total[1] + total[2];
    printf("Your Final cost with gst is: %f\n", total_cost);


    return 0;
}