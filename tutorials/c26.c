// RECURSION
// When a function calls itself its called recursion
// Print "Hello, world!" 5 times`
// agar recursion kar sakte hai toh vahi same loop se bhi kar sakte hai
#include <stdio.h>

//recursive function
void printHello(int n) {
    if (n == 0)
    {
        return;
    }
    printf("Hello, world!\n");
    printHello(n-1);
}
int main()
{
    printHello(5);
    return 0;
}