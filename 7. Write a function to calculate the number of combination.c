// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
long long int fact(long long int a);
long long int combi(long long int n, long long int y);
int main()
{
    long long int n, r;
    printf("total number of onjects in the set = ");
    scanf("%lld", &n);
    printf("number of choosing object from the set = ");
    scanf("%lli", &r);
    fact(n);
    printf("Total number of combination is = %lli", combi(n, r));
    return 0;
}
long long int fact(long long int a)
{
    long long int x = 1;
    while (a)
    {
        x = x * a;
        a--;
    }
    return x;
}
long long int combi(long long int n, long long int y)
{
    long long int nCr = fact(n) / ((fact(n - y)) * fact(y));
    return nCr;
}