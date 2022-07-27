// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
long long int fact(long long int a);
long long int permu(long long int n, long long int y);
int main()
{
    long long int n, r;
    printf("total number of onjects in the set = ");
    scanf("%lld", &n);
    printf("number of choosing object from the set = ");
    scanf("%lli", &r);
    fact(n);
    printf("Total number of arrangements is = %lli", permu(n, r));
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
long long int permu(long long int n, long long int y)
{
    long long int nPr = fact(n) / (fact(n - y));
    return nPr;
}