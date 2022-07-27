// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
int fun(int, int);
int main()
{
    int a, b, c;
    printf("enter a number = ");
    scanf("%d", &a);
    printf("enter a digit(0 - 9) = ");
    scanf("%d", &b);
    c = fun(a, b);
    if (c == 1)
        printf("%d is present in %d ", b, a);
    else
        printf("%d is NOT present in %d", b, a);
}
int fun(int x, int y)
{
    int z;
    while (x)
    {
        z = 0;
        z = x % 10;
        if (z == y)
        {
            return 1;
        }
        x = x / 10;
    }
    return 0;
}