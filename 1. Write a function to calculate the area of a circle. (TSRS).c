// 1. Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
float circle(float);
int main()
{
    float r;
    printf("enter radius of circlr = ");
    scanf("%f", &r);
    circle(r);
    printf("Area of circle is %f", circle(r));
    return 0;
}
float circle(float R)
{
    float a, pi = 22 / 7.0;
    a = pi * R * R;
    return a;
}
