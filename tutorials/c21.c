#include <stdio.h>
int main()
{
    //break
    for (int i = 1; i<=5; i++)
    {
        if (i==3){
            break; //loop se exit
        }
        printf("%d \n",i);
    }
    printf("end");
    return 0;
}