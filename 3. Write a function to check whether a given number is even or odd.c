// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
int fun(int);
#include <stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d", &x);
    fun(x);
    printf("%d", fun(x));
    return 0;
}
int fun(int y)
{
    if (y % 2)
        return 0;
    else
        return 1;
}