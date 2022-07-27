// 4. Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
void Natural(int);
int main()
{
    int n;
    printf("enter a natural number\n");
    scanf("%d", &n);
    Natural(n);
    return 0;
}
void Natural(int N)
{
    for (int i = 1; i <= N; i++)
        printf("%d  ", i);
}