#include <stdio.h>
int main()
{
    // Switch
    // switch(number){
    //     case c1: //do something
    //         break;
    //     case c2: // do something
    //         break;
    //     default: // do something
    // }

    int something;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &something);
    switch(something){
        case 1:
            printf("Good Monday");
            break;
        case 2:
            printf("Good Tuesday");
            break;
        case 3:
            printf("Good Wednesday");
            break;
        case 4:
            printf("Good Thursday");
            break;
        case 5:
            printf("Good Friday");
            break;
        case 6:
            printf("Good Saturday");
            break;
        case 7:
            printf("Good Sunday");
            break;
        default:
            printf("Bad number");
    }

// Cases can be in any order

// Nested switch (switch inside switch)
}