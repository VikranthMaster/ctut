#include <stdio.h>
int main()
{
    // Ternary Operator
    // Condition ? doSomething if True : do something if False;
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    age > 18 ? printf("Adult \n") : printf("Child \n");

    //basically in interviews they ask and used only for single line codes
}