/* Write a program to calculate the area of a circle
#include <stdio.h>
int main()
{
    float radius;
    float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of a circle is: %f", pi*(radius*radius));
}
*/

/*Write a program to calulate the perimeter of rectangle
#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Perimeter of rectangle is: %f", 2*(a+b));
}
*/

/*Take a user input and print the volume of the cube*/
#include <stdio.h>
int main()
{
    int side;
    printf("Enter the lenth of side: ");
    scanf("%d",&side);
    int vol = side*side*side;
    printf("Volume of cube is: %d", vol);
    return 0;
}