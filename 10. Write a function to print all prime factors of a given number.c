// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include <stdio.h>
void PrimeFactor(int x);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    PrimeFactor(n);
    return 0;
}
void PrimeFactor(int x)
{
    int y = x;
    int i, j;
    printf("All Prime Factorial of %d is = ", x);
    for (i = 2; i <= y;)
    {
        if (y % i == 0)
        {
            printf("%d ", i);
            y = y / i;
        }
        else
            i++;
    }
}
