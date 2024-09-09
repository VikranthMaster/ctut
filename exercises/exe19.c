//calucalte the area of square, rectangle, circle
#include <stdio.h>

void square(int x)
{
    printf("%d", x*x);
}

void circle(float r)
{
    printf("%f", 3.14*(r*r));
}

void rectangle(int l, int w)
{
    printf("%d", l*w);
}

int main()
{
    char c;
    printf("Enter s or c or r: ");
    scanf("%c", &c);

    if (c == 'c')
    {   
        float r;
        printf("Enter the radius of the circle u wanna calculate: ");
        scanf("%f", &r);
        circle(r);
    }
    else if (c == 's')
    {
        int x;
        printf("Enter the side of the square u wanna calculate: ");
        scanf("%d", &x);
        square(x);
    }

    else if(c=='r')
    {
        int x,y;
        printf("Enter the length: ");
        scanf("%d",&x);
        printf("Enter the width: ");
        scanf("%d",&y);
        rectangle(x,y);
    }

    else 
    {
        printf("Invalid");
    }

    return 0;
}