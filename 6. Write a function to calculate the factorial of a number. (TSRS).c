// 6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
long long int factorial(long long int x);
int main()
{
    long long int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("factorial of %lli  =  %lli", n, factorial(n));
    return 0;
}
long long int factorial(long long int x)
{
    long long int y = 1;
    while (x)
    {
        y = y * x;
        x--;
    }
    return y;
}