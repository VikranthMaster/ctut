// Write  program to give this
// marks < 30 is C
// 30 <= marks < 70 is B
// 70  <= marks < 90 is A
// 90 <= marks <=100 is A+

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks < 30)
    {
        printf("C \n");
    }
    else if(marks >= 30 && marks <=70)
    {
        printf("B \n");
    }
    else if(marks >= 70 && marks <= 90)
    {
        printf("A \n");
    }
    else if(marks >= 90 && marks <= 100)
    {
        printf("A+ \n");
    }
    else{
        printf("Invalid marks \n");
    }


    int x = 2;
    if(x=1) //x=1 is assignment operator not relation operator so x=1 will always be true cause its going to that variable and changing its value to 1 otther than 0 any other number will always give the same output
    {
        printf("x is equal to 1");
    }
    else {
        printf("x is not equal to 1");
    }

}