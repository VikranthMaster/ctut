// Conditional statments
// 1.If-else
// 2.switch
#include <stdio.h>
int main()
{
    //IF-ELSE:
        // if(condition){
        //     // Do something
        // } else {
        //     //do something else
        // }
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age>18){
        printf("You are an adult\n");
    }
    
    else if (age<18 && age>16) {
        printf("Good luck u are in hell");
    }

    else {
        printf("You are a child \n");
    }

    return 0;
}