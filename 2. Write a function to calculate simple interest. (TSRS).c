// 2. Write a function to calculate simple interest. (TSRS)
float SimpleIntrest(float a, float b, float c);
#include <stdio.h>
int main()
{
    float P, R, T;
    printf("enter Principal amount, Intrest rate and Time (in year)\n");
    scanf("%f%f%f", &P, &R, &T);
    SimpleIntrest(P, R, T);
    printf("Simple Intrest is = %f", SimpleIntrest(P, R, T));
    return 0;
}
float SimpleIntrest(float a, float b, float c)
{
    float SI;
    SI = (a * b * c) / 100;
    return SI;
}